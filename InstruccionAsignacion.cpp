#include "InstruccionAsignacion.h"

InstruccionAsignacion::InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, ASIGNACION, idDeExpresion)
{
    this->variable = variable;
    this->expresion = expresion;
    this->listaIndices = 0;
}

InstruccionAsignacion::InstruccionAsignacion(VariableArreglo *variable, Lista *listaIndices, Instruccion *siguiente, int idDeExpresion)
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

    if( expresion != 0)
    {
        this->expresion->validarSemantica();
    }
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
    /*Caso, buscar nombre de variable
        1. si ya existe verificar que la expresion reduzca al mismo tipo en que esta declarado
        2. si no existe declarar la variable.
    */
    stringstream codigoAsignacion;

    if( variable->tipo == VARIABLENORMAL )
    {
        string codigoVariable = this->variable->generarCodigoJava();
        Variable *var = (Variable*)variable;

        VariableDeclarada* variableDeclarada = Programa::obtenerInstancia()->existeVariable(var->obtenerIdentificador(), var->obtenerIdDeExpresion());
        if( variableDeclarada == 0 )
        {
            codigoAsignacion << codigoVariable;
            codigoAsignacion << "$";
            codigoAsignacion << var->obtenerIdDeExpresion();
            /*Falta el nombre de la variables*/
            codigoAsignacion << var->obtenerIdentificador()->c_str();
            codigoAsignacion << " = ";
            codigoAsignacion << this->expresion->generarCodigoJava();
            codigoAsignacion << "; \n";
        }
        else if( variableDeclarada != 0 && variableDeclarada->obtenerTipo()->tipo == this->expresion->tipoInferido->tipo)
        {
            /*Ya existe y es del mismo tipo*/
            codigoAsignacion << "$";
            codigoAsignacion << variableDeclarada->obtenerIdDeExpresion();
            /*Falta el nombre de la variables*/
            codigoAsignacion << variableDeclarada->obtenerVariable()->obtenerIdentificador()->c_str();
            codigoAsignacion << " = ";
            codigoAsignacion << this->expresion->generarCodigoJava();
            codigoAsignacion << "; \n";
        }
        else
        {
            codigoAsignacion << codigoVariable;
            codigoAsignacion << "$";
            codigoAsignacion << var->obtenerIdDeExpresion();
            /*Falta el nombre de la variables*/
            codigoAsignacion << var->obtenerIdentificador()->c_str();
            codigoAsignacion << " = ";
            codigoAsignacion << this->expresion->generarCodigoJava();
            codigoAsignacion << "; \n";
        }
    }
    else if(variable->tipo == ARREGLO)
    {
        VariableArreglo *var = (VariableArreglo*)variable;

        codigoAsignacion << "ArrayList<Object> ";
        codigoAsignacion << "$";
        codigoAsignacion << var->obtenerIdDeExpresion();
        codigoAsignacion << var->obtenerIdentificador()->c_str();
        codigoAsignacion << " = new ArrayList<Object>();\n";
    }

    return codigoAsignacion.str();
}
