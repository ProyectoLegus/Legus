#include "Variable.h"
#include "Programa.h"

Variable::Variable(string *identificador, int numeroDeLinea, int idDeExpresion, Expresiones tipo)
    :Expresion(tipo,numeroDeLinea)
{
    this->identificador = identificador;
    this->idDeExpresion = idDeExpresion;
    this->expresion = 0;
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

    /*Que no sea una variable de Utilizar ni nombre de funcion*/
    vector<DeclaracionUtilizar*> *tablaDePuertosYSensores = Programa::obtenerInstancia()->tablaDePuertosYSensores;
    for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
        if(this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            throw(ExcepcionLegus("Variable 'ReemplazarPorVariable' esta siendo utilizada en Puerto 'PUERTO' como 'SENSOR'"));
        }
    }

    vector<DeclaracionDeFuncion*> *tablaDeFunciones = Programa::obtenerInstancia()->tablaDeFunciones;
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        if( this->identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador()))
        {
            throw(ExcepcionLegus("Variable 'ReemplazarPorVariable' esta siendo utilizada en funcion 'FUNCION'"));
        }
    }

    Tipo* tipoDeVariable = obtenerTipoDeVariable();

    if( tipoDeVariable != 0)
    {
        return tipoDeVariable;
    }

    throw(ExcepcionLegus("¡Variable no existe!",numeroDeLinea));
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
        Tipo* tipoVariable = expresion->tipoInferido;

        if( tipoVariable->tipo == Entero )
        {
            codigoVariable << "int ";
        }

        if( tipoVariable->tipo == Flotante )
        {
            codigoVariable << "float ";
        }

        if( tipoVariable->tipo == Caracter)
        {
            codigoVariable << "char ";
        }

        if( tipoVariable->tipo == Cadena)
        {
            codigoVariable << "String ";
        }

        if( tipoVariable->tipo == Booleano )
        {
            codigoVariable << "boolean ";
        }
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
    }
    return codigoVariable.str();
}
