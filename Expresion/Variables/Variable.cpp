#include "Expresion/Variables/Variable.h"
#include "Programa/Programa.h"

Variable::Variable(string *identificador, int numeroDeLinea, int idDeExpresion, Expresiones tipo)
    :Expresion(tipo,numeroDeLinea)
{
    this->identificador = identificador;
    this->idDeExpresion = idDeExpresion;
    this->expresion = 0;
    this->dclr = 0;
}

Variable::Variable(string *identificador,Expresion *expresion ,int numeroDeLinea, int idDeExpresion, Expresiones tipo)
    :Expresion(tipo,numeroDeLinea)
{
    this->identificador = identificador;
    this->idDeExpresion = idDeExpresion;
    this->expresion = expresion;
}

string* Variable::obtenerIdentificador()
{
    return this->identificador;

}

int Variable::obtenerIdDeExpresion()
{
    return this->idDeExpresion;
}

Tipo* Variable::validarSemantica()
{
    /*No se donde mas ponerla*/
    if( expresion != 0)
    {
        expresion->validarSemantica();
    }
    // Revisar si es un boton
    if( strcmpi(obtenerIdentificador()->c_str(),"BotonDerecho") == 0)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBotonDerecho();
        return this->tipoInferido;
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonIzquierdo")==0)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBotonIzquierdo();
        return this->tipoInferido;
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonCentral")==0)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBotonCentral();
        return this->tipoInferido;
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonEscape")==0)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBotonEscape();
        return this->tipoInferido;
    }


    /*Buscar si es variable de sensor y devolver su tipo*/
    vector<DeclaracionUtilizar*> *tablaDePuertosYSensores = Programa::obtenerInstancia()->tablaDePuertosYSensores;
    for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
        if(this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            return declaracion->obtenerTipoSensor();
        }
    }

    vector<DeclaracionDeFuncion*> *tablaDeFunciones = Programa::obtenerInstancia()->tablaDeFunciones;
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        if( this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFuncion();
            return this->tipoInferido;
//            stringstream ss;
//            ss << "Variable '" << *declaracion->obtenerVariable()->obtenerIdentificador() << "' ";
//            ss << "esta siendo como nombre de funcion";
//            throw(ExcepcionLegus(ss.str()));
        }
    }

    Tipo* tipoDeVariable = obtenerTipoDeVariable();

    if( tipoDeVariable != 0)
    {
        this->tipoInferido = tipoDeVariable;
        return tipoDeVariable;
    }

    if( Programa::obtenerInstancia()->tablaVariableFuncsLocales != 0)
    {
        // Exito !
        VariableDeclarada *dc = Programa::obtenerInstancia()->obtenerVDeclaradaVariablesFuncsLocales(obtenerIdentificador());
        if( dc != 0)
        {
            dclr = dc;
            this->tipoInferido = dc->obtenerTipo();
            return this->tipoInferido;
        }
    }

    if( dclr == 0)
    {
        string mensajeDeError = "¡Variable '";
        mensajeDeError += *this->identificador;
        mensajeDeError += "' no esta definida!";
        throw(ExcepcionLegus(mensajeDeError,numeroDeLinea));
    }
    else
    {
        this->tipoInferido = dclr->obtenerTipo();
        return this->tipoInferido;
    }
}

Tipo* Variable::obtenerTipoDeVariable()
{
    vector<VariableDeclarada*> *variables = Programa::obtenerInstancia()->tablaDeVariables;
    VariableDeclarada* ultimaVariable = 0;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/
        if( variable->obtenerVariable()->obtenerIdentificador()->compare( *identificador ) == 0 &&
            variable->obtenerIdDeExpresion() <= this->idDeExpresion)
        {
            ultimaVariable = variable;
        }
    }

    return ultimaVariable==0?
                    0:
                    ultimaVariable->obtenerTipo();
}

string Variable::generarCodigoJava()
{
    stringstream codigoVariable;

    if( expresion != 0 )
    {
//        Tipo* tipoVariable = expresion->validarSemantica();
    }
    else
    {
        /*Devolver solo el nombre??????*/
        VariableDeclarada* variableDeclarada = Programa::obtenerInstancia()->existeVariable(obtenerIdentificador(), obtenerIdDeExpresion());
        if( variableDeclarada != 0)
        {
            codigoVariable << "$";
            codigoVariable << variableDeclarada->obtenerIdDeExpresion();
            codigoVariable << variableDeclarada->obtenerVariable()->obtenerIdentificador()->c_str();
        }
        else
        {
            /*De Utilizar!*/
            DeclaracionUtilizar *util = Programa::obtenerInstancia()->existeEnTablaDePuertosYSensores(obtenerIdentificador());
            if( util != 0)
            {
                codigoVariable << util->obtenerCodigo();
            }
            else
            {
                if( this->dclr != 0)
                {
                    // La que tengo local, debe ser en funcion que estoy
                    codigoVariable << *this->dclr->obtenerVariable()->obtenerIdentificador();
                }
                else
                {
                    // No se como hacer aqui:!
                }
            }
        }
    }
    if( strcmpi(obtenerIdentificador()->c_str(),"BotonDerecho") == 0)
    {
        codigoVariable << "Button.RIGHT";
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonIzquierdo")==0)
    {
        codigoVariable << "Button.LEFT";
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonCentral")==0)
    {
        codigoVariable << "Button.ENTER";
    }
    else if( strcmpi(obtenerIdentificador()->c_str(), "BotonEscape")==0)
    {
        codigoVariable << "Button.ESCAPE";
    }

    return codigoVariable.str();
}

void Variable::establecerIdDeExpresion(int idDeExpresion)
{
    this->idDeExpresion = idDeExpresion;
}

