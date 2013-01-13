#include "ExpresionBinariaMayorIgual.h"

ExpresionBinariaMayorIgual::ExpresionBinariaMayorIgual(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MAYOR)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaMayorIgual::validarSemantica()
{
    return 0;
}
