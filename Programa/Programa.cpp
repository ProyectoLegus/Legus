#include "Programa/Programa.h"

Programa* Programa::instancia = 0;

Programa::Programa()
{
    this->tablaDeFunciones = new vector<DeclaracionDeFuncion*>();
    this->tablaDeVariables = new vector<VariableDeclarada*>();
    this->tablaDePuertosYSensores = new vector<DeclaracionUtilizar*>();
    this->tablaDeVariablesADeclarar = new vector<VariableADeclarar*>();

    /*Instancia de los tipos*/
    this->tipoBooleano = new TipoBooleano();
    this->tipoCadena = new TipoCadena();
    this->tipoCaracter = new TipoCaracter();
    this->tipoEntero = new TipoEntero();
    this->tipoFlotante = new TipoFlotante();
    this->tipoArreglo = new TipoArreglo();
    this->tipoMotor = new TipoMotor();
    this->tipoSensorDeBrujula = new TipoSensorDeBrujula();
    this->tipoSensorDeColor = new TipoSensorDeColor();
    this->tipoSensorDeInclinacion = new TipoSensorDeInclinacion();
    this->tipoSensorDeLuz = new TipoSensorDeLuz();
    this->tipoSensorDeSonido = new TipoSensorDeSonido();
    this->tipoSensorDeTacto = new TipoSensorDeTacto();
    this->tipoSensorGiroscopico = new TipoSensorGiroscopico();
    this->tipoSensorUltrasonico = new TipoSensorUltrasonico();
}

Programa* Programa::obtenerInstancia()
{
    if(!instancia)
    {
        instancia = new Programa();
        instancia->cargarFuncionesIncorporadas();
    }
    return instancia;
}

TipoBooleano* Programa::obtenerTipoBooleano()
{
    return this->tipoBooleano;
}

TipoCadena* Programa::obtenerTipoCadena()
{
    return this->tipoCadena;
}

TipoCaracter* Programa::obtenerTipoCaracter()
{
    return this->tipoCaracter;
}

TipoEntero* Programa::obtenerTipoEntero()
{
    return this->tipoEntero;
}

TipoFlotante* Programa::obtenerTipoFlotante()
{
    return this->tipoFlotante;
}

TipoArreglo*  Programa::obtenerTipoArreglo()
{
    return this->tipoArreglo;
}

TipoMotor* Programa::obtenerTipoMotor()
{
    return this->tipoMotor;
}

TipoSensorDeBrujula* Programa::obtenerSensorDeBrujula()
{
    return this->tipoSensorDeBrujula;
}

TipoSensorDeColor* Programa::obtenerSensorDeColor()
{
    return this->tipoSensorDeColor;
}

TipoSensorDeInclinacion* Programa::obtenerSensorDeInclinacion()
{
    return this->tipoSensorDeInclinacion;
}

TipoSensorDeLuz* Programa::obtenerSensorDeLuz()
{
    return this->tipoSensorDeLuz;
}

TipoSensorDeSonido* Programa::obtenerSensorDeSonido()
{
    return this->tipoSensorDeSonido;
}

TipoSensorDeTacto* Programa::obtenerSensorDeTacto()
{
    return this->tipoSensorDeTacto;
}

TipoSensorGiroscopico* Programa::obtenerSensorGiroscopico()
{
    return this->tipoSensorGiroscopico;
}

TipoSensorUltrasonico* Programa::obtenerSensorUltrasonico()
{
    return this->tipoSensorUltrasonico;
}

VariableDeclarada* Programa::existeVariable(string *identificador, int idDeExpresion)
{
    vector<VariableDeclarada*> *variables = Programa::obtenerInstancia()->tablaDeVariables;
    VariableDeclarada* ultimaVariable = 0;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/
        if( variable->obtenerVariable()->obtenerIdentificador()->compare( *identificador ) == 0 &&
            variable->obtenerIdDeExpresion() < idDeExpresion)
        {
            ultimaVariable = variable;
        }
    }

    return ultimaVariable;
}

DeclaracionDeFuncion* Programa::existeEnTablaDeFunciones(string *identificador, int idDeExpresion)
{
    for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
    {
        DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
        if( identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            return declaracion;
        }
    }
    return 0;
}

DeclaracionUtilizar* Programa::existeEnTablaDePuertosYSensores(string *identificador, int idDeExpresion)
{
    for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
    {
        DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
        if(identificador->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
        {
            return declaracion;
        }
    }
    return 0;
}

/*El primero es el id de expresion de la variable que quiero cambiar
    el segundo es el valor que le pondre
*/
void  Programa::establecerIdDeExpresionAVariable(int idExpresion, int idExpresionACambiar)
{
    for(unsigned int i = 0 ; i< this->tablaDeVariables->size(); i++)
    {
        VariableDeclarada* variable = this->tablaDeVariables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/
        if( variable->obtenerIdDeExpresion() == idExpresion)
        {
            variable->establecerIdDeExpresion(idExpresionACambiar);
        }
    }
}

void Programa::limpiarInstancia()
{
    this->instancia = 0;
}

string Programa::obtenerCodigoVariablesADeclarar()
{
    stringstream resultado;
    for(unsigned int i = 0; i<this->tablaDeVariablesADeclarar->size(); i++)
    {
        VariableADeclarar *variable = this->tablaDeVariablesADeclarar->at(i);
        Tipo *tipoVariable = variable->tipo;

        if( tipoVariable->tipo == Entero )
        {
            resultado << "int ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=0;";
        }

        if( tipoVariable->tipo == Flotante )
        {
            resultado << "float ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=0.0;";
        }

        if( tipoVariable->tipo == Caracter)
        {
            resultado << "char ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=' ';";
        }

        if( tipoVariable->tipo == Cadena)
        {
            resultado << "String ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=\"\";";
        }

        if( tipoVariable->tipo == Booleano )
        {
            resultado << "boolean ";
            resultado << "$";
            resultado << variable->id;
            resultado << *variable->variable;
            resultado << "=false;";
        }

        resultado << "\n";
    }
    return resultado.str();
}

/*Cargas las funciones incorporadas en Legus*/
void Programa::cargarFuncionesIncorporadas()
{
    FuncionesIncorporadas fi;

    this->funcionesIncorporadas = fi.obtenerFuncionesIncorporadas();
}

string Programa::obtenerCodigoFuente(string nombreArchivo,
                                     string inclusiones,
                                     string declaracionFunciones,
                                     string bloqueCodigo)
{
    stringstream codigoFuente;
    codigoFuente << inclusiones;
    codigoFuente << "public class ";
    codigoFuente << nombreArchivo;
    codigoFuente << "{\n";

        codigoFuente << declaracionFunciones;
        codigoFuente << "\n";

        codigoFuente << "public static void main(String args[])";
        codigoFuente << "{\n";
            codigoFuente << bloqueCodigo;
            codigoFuente << "\n";
        codigoFuente << "}\n";
    codigoFuente << "}\n";

    return codigoFuente.str();
}

bool Programa::existeFuncionIncorporada(string nombreFuncion, Lista *parametros)
{
    bool encontrado = false;
    if( funcionesIncorporadas->find(nombreFuncion) != funcionesIncorporadas->end())
    {
        /*Existe!*/
        vector<Funcion*>* posiblesParametros = (*funcionesIncorporadas)[nombreFuncion];
        for(unsigned int i=0; i<posiblesParametros->size(); i++)
        {
            Funcion* posibleFuncion = posiblesParametros->at(i);
            if( posibleFuncion->parametros->size() == parametros->lista->size())
            {
                bool encaja = true;
                for(unsigned int j = 0; j<posibleFuncion->parametros->size(); j++)
                {
                    TipoParametro tp = posibleFuncion->parametros->at(j);
                    Expresion *expresion = parametros->lista->at(j);
                    if( obtenerTipoEnBaseATipoParametro(tp) != expresion->validarSemantica() )
                    {
                        encaja = false;
                    }
                }
                if( encaja )
                {
                    encontrado = true;
                    break;
                }
            }
        }
    }
    return encontrado;
}

Tipo* Programa::obtenerTipoEnBaseATipoParametro(TipoParametro tipoParam)
{
    if(tipoParam == TEntero)
    {
        return tipoEntero;
    }
    else if( tipoParam == TFlotante)
    {
        return tipoFlotante;
    }
    else if( tipoParam == TCadena)
    {
        return tipoCadena;
    }
    else if(tipoParam == TCaracter)
    {
        return tipoCaracter;
    }
    else if(tipoParam == TBooleano)
    {
        return tipoBooleano;
    }
}
