#include "ExpresionBinariaMultiplicacion.h"

ExpresionBinariaMultiplicacion::ExpresionBinariaMultiplicacion(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, MULTIPLICACION,numeroDeLinea)
{
}

Tipo* ExpresionBinariaMultiplicacion::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    /*Entero * Entero */
    if( (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Entero) )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    /*Flotante * Flotante*/
    if( tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Flotante )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    /*Entero * Flotante || Flotante * Entero*/
    if((tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Flotante)||
       (tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Entero))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    throw(ExcepcionLegus("Tipos incompatibles en operacion multiplicacion '*' ", numeroDeLinea));
}

string ExpresionBinariaMultiplicacion::generarCodigoJava()
{
    string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
    string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

    return "(" + codigoExpresionIzquierda + " * " + codigoExpresionDerecha + ")";
}
