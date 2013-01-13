#include "ExpresionBinariaMultiplicacion.h"

ExpresionBinariaMultiplicacion::ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MULTIPLICACION)
{
}

Tipo* ExpresionBinariaMultiplicacion::validarSemantica()
{
    return 0;
}
