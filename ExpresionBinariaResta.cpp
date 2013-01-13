#include "ExpresionBinariaResta.h"

ExpresionBinariaResta::ExpresionBinariaResta(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, RESTA)
{
}

Tipo* ExpresionBinariaResta::validarSemantica()
{
    return 0;
}
