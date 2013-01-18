#include "Expresion/ExpresionUnaria/ExpresionUnaria.h"

ExpresionUnaria::ExpresionUnaria(Expresion *expresion, Expresiones tipo, int numeroDeLinea)
    :Expresion(tipo, numeroDeLinea)
{
    this->expresion = expresion;
}

Expresion* ExpresionUnaria::obtenerExpresion()
{
    return this->expresion;
}
