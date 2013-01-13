#include "ExpresionUnariaNegacion.h"

ExpresionUnariaNegacion::ExpresionUnariaNegacion(Expresion *expresion)
    :ExpresionUnaria(expresion, NEGACION)
{
}

Tipo* ExpresionUnariaNegacion::validarSemantica()
{
    return 0;
}
