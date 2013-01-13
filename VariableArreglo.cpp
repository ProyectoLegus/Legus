#include "VariableArreglo.h"

VariableArreglo::VariableArreglo(string *identificador, Lista *lista_indices)
    :Variable(identificador, ARREGLO)
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
