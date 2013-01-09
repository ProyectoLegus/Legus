#include "ExpresionUnaria.h"

ExpresionUnaria::ExpresionUnaria(Expresion *expresion, Expresiones tipo)
    :Expresion(tipo)
{
    this->expresion = expresion;
}
