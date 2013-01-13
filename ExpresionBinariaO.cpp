#include "ExpresionBinariaO.h"

ExpresionBinariaO::ExpresionBinariaO(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, OPERADORO)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaO::validarSemantica()
{
    return 0;
}
