#include "ExpresionBinariaDivision.h"

ExpresionBinariaDivision::ExpresionBinariaDivision(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, DIVISION)
{
}

Tipo* ExpresionBinariaDivision::validarSemantica()
{
    return 0;
}
