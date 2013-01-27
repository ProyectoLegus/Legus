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
}

Programa* Programa::obtenerInstancia()
{
    if(!instancia)
    {
        instancia = new Programa();
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
