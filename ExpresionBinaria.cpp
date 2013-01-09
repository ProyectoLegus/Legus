#include "ExpresionBinaria.h"

ExpresionBinaria::ExpresionBinaria(Expresion *izquierda, Expresion *derecha, Expresiones tipo)
    :Expresion(tipo)
{
    this->izquierda = izquierda;
    this->derecha = derecha;
}
