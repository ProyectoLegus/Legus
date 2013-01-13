#include "ExpresionBinariaMayor.h"

ExpresionBinariaMayor::ExpresionBinariaMayor(Expresion *izquierda, Expresion *derecha)
    :ExpresionBinaria(izquierda, derecha, MAYOR)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaMayor::validarSemantica()
{
    return 0;
}
