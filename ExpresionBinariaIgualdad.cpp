#include "ExpresionBinariaIgualdad.h"

ExpresionBinariaIgualdad::ExpresionBinariaIgualdad(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, IGUALDAD)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaIgualdad::validarSemantica()
{
    return 0;
}
