#include "Expresion/ExpresionBinaria/ExpresionBinariaY.h"

ExpresionBinariaY::ExpresionBinariaY(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, OPERADORY,numeroDeLinea)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaY::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    if( tipoIzquierda->tipo == Booleano && tipoDerecha->tipo == Booleano)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipos incompatibles en operacion logica 'Y'", numeroDeLinea));
}

string ExpresionBinariaY::generarCodigoJava()
{
    string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
    string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

    /*Izqiuerda && Derecha*/
    return "(" + codigoExpresionIzquierda + " && " + codigoExpresionDerecha + ")";
}
