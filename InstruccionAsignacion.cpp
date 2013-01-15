#include "InstruccionAsignacion.h"

InstruccionAsignacion::InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, ASIGNACION, idDeExpresion)
{
    this->variable = variable;
    this->expresion = expresion;
    this->listaIndices = 0;
}

InstruccionAsignacion::InstruccionAsignacion(Expresion *variable, Lista *listaIndices, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente,ASIGNACION, idDeExpresion)
{
    this->variable = variable;
    this->listaIndices = listaIndices;
    this->expresion = 0;
}

void InstruccionAsignacion::validarSemantica()
{
//    this->variable->validarSemantica();
    if( variable->tipo == VARIABLENORMAL )
    {
        Variable *var = (Variable*)variable;
        /*Que no sea una variable de Utilizar ni nombre de funcion*/
        vector<DeclaracionUtilizar*> *tablaDePuertosYSensores = Programa::obtenerInstancia()->tablaDePuertosYSensores;
        for(unsigned int i = 0; i< tablaDePuertosYSensores->size(); i++)
        {
            DeclaracionUtilizar *declaracion = tablaDePuertosYSensores->at(i);
            if(var->obtenerIdentificador()->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
            {
                throw(ExcepcionLegus("Variable 'ReemplazarPorVariable' esta siendo utilizada en Puerto 'PUERTO' como 'SENSOR'"));
            }
        }

        vector<DeclaracionDeFuncion*> *tablaDeFunciones = Programa::obtenerInstancia()->tablaDeFunciones;
        for(unsigned int i = 0; i< tablaDeFunciones->size(); i++)
        {
            DeclaracionDeFuncion *declaracion = tablaDeFunciones->at(i);
            if( var->obtenerIdentificador()->compare(*declaracion->obtenerVariable()->obtenerIdentificador())==0)
            {
                throw(ExcepcionLegus("Variable 'ReemplazarPorVariable' esta siendo utilizada en funcion 'FUNCION'"));
            }
        }
    }

    this->expresion->validarSemantica();
}

Expresion* InstruccionAsignacion::obtenerExpresion()
{
    return this->expresion;
}

Expresion* InstruccionAsignacion::obtenerVariable()
{
    return this->variable;
}

string InstruccionAsignacion::generarCodigoJava()
{
    return "";
}
