#include "Variable.h"
#include "Programa.h"

Variable::Variable(string *identificador, int numeroDeLinea, int idDeExpresion, Expresiones tipo)
    :Expresion(tipo,numeroDeLinea)
{
    this->identificador = identificador;
    this->idDeExpresion = idDeExpresion;
}

string* Variable::obtenerIdentificador()
{
    return this->identificador;
}

Tipo* Variable::validarSemantica()
{
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
    return "";
}
