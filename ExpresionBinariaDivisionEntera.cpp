#include "ExpresionBinariaDivisionEntera.h"

ExpresionBinariaDivisionEntera::ExpresionBinariaDivisionEntera(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, DIVISIONENTERA)
{
}

Tipo* ExpresionBinariaDivisionEntera::validarSemantica()
{
    return 0;
}
