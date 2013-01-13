#include "ExpresionBinariaMenorIgual.h"

ExpresionBinariaMenorIgual::ExpresionBinariaMenorIgual(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MENORIGUAL)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaMenorIgual::validarSemantica()
{
    return 0;
}
