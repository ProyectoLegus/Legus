#include "ExpresionBinariaDistinto.h"

ExpresionBinariaDistinto::ExpresionBinariaDistinto(Expresion *izquierda, Expresion *derecha)
    : ExpresionBinaria(izquierda, derecha, DISTINTO)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaDistinto::validarSemantica()
{
    return 0;
}
