#include "ExpresionBinariaY.h"

ExpresionBinariaY::ExpresionBinariaY(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, OPERADORY)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaY::validarSemantica()
{
    return 0;
}
