#include "expresionBinariaModulo.h"

ExpresionBinariaModulo::ExpresionBinariaModulo(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MODULO)
{
}

Tipo* ExpresionBinariaModulo::validarSemantica()
{
    return 0;
}
