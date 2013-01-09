#include "VariableArreglo.h"

VariableArreglo::VariableArreglo(string *identificador, Lista *lista_indices)
    :Variable(identificador, ARREGLO)
{
    this->lista_indices = lista_indices;
}
