#include "InstruccionAsignacionArreglo.h"

InstruccionAsignacionArreglo::
        InstruccionAsignacionArreglo(VariableArreglo *variable, Expresion *expr,
                                    Instruccion *siguiente, int idDeExpresion,
                                   int numeroDeLinea)
    :Instruccion(siguiente,ASIGNACION,idDeExpresion,numeroDeLinea)
{
    this->variable = variable;
    this->expr = expr;
}

void InstruccionAsignacionArreglo::validarSemantica()
{
    // validar que exista el nombre de esta variable como arreglo
}

string InstruccionAsignacionArreglo::generarCodigoJava()
{
    stringstream ss;

    ss << "$$";
    ss << *variable->obtenerIdentificador();
    ss << variable->obtenerIdDeExpresion();
    ss << ".set(";

    // Codigo de Indice
    Expresion *indice = variable->obtenerListaIndices()->lista->at(0);
    ss << indice->generarCodigoJava();
    ss << ",";
    ss << expr->generarCodigoJava();
    ss << ");";

    return ss.str();
}
