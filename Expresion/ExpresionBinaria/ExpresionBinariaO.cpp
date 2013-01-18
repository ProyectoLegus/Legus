#include "Expresion/ExpresionBinaria/ExpresionBinariaO.h"

ExpresionBinariaO::ExpresionBinariaO(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, OPERADORO,numeroDeLinea)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaO::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    if( tipoIzquierda->tipo == Booleano && tipoDerecha->tipo == Booleano)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipos incompatibles en operacion logica O", numeroDeLinea));
}

string ExpresionBinariaO::generarCodigoJava()
{
    string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
    string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

    return "(" + codigoExpresionIzquierda + " || " + codigoExpresionDerecha + ")";
}
