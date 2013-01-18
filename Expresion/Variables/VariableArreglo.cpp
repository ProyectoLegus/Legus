#include "Expresion/Variables/VariableArreglo.h"

VariableArreglo::VariableArreglo(string *identificador, Lista *lista_indices, int numeroDeLinea, int idDeExpresion)
    :Variable(identificador,numeroDeLinea, idDeExpresion, ARREGLO)
{
    this->lista_indices = lista_indices;
}


Lista* VariableArreglo::obtenerListaIndices()
{
    return this->lista_indices;
}

Tipo* VariableArreglo::validarSemantica()
{
    return 0;
}

string VariableArreglo::generarCodigoJava()
{
    return "";
}
