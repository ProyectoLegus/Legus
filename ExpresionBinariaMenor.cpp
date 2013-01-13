#include "ExpresionBinariaMenor.h"

ExpresionBinariaMenor::ExpresionBinariaMenor(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MENOR)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaMenor::validarSemantica()
{
    return 0;
}
