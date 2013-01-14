#include "ExpresionUnariaNegativo.h"

ExpresionUnariaNegativo::ExpresionUnariaNegativo(Expresion *expresion, int numeroDeLinea)
    :ExpresionUnaria(expresion,NEGATIVO, numeroDeLinea)
{
}

Tipo* ExpresionUnariaNegativo::validarSemantica()
{
    Tipo *tipoExpresion = obtenerExpresion()->validarSemantica();

    if( tipoExpresion->tipo == Entero)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    if( tipoExpresion->tipo == Flotante)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    throw(ExcepcionLegus("Tipos incompatibles en operacion unaria negativo '-' "));
}
