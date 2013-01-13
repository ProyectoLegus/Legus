#include "ExpresionUnariaNegativo.h"

ExpresionUnariaNegativo::ExpresionUnariaNegativo(Expresion *expresion)
    :ExpresionUnaria(expresion,NEGATIVO)
{
}

Tipo* ExpresionUnariaNegativo::validarSemantica()
{
    return 0;
}
