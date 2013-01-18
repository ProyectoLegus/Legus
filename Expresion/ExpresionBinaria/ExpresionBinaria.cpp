#include "ExpresionBinaria.h"

ExpresionBinaria::ExpresionBinaria(Expresion *izquierda, Expresion *derecha, Expresiones tipo, int numeroDeLinea)
    :Expresion(tipo, numeroDeLinea)
{
    this->izquierda = izquierda;
    this->derecha = derecha;
}

Expresion* ExpresionBinaria::obtenerExpresionIzquierda()
{
    return this->izquierda;
}

Expresion* ExpresionBinaria::obtenerExpresionDerecha()
{
    return this->derecha;
}
