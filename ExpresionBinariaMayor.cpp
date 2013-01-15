#include "ExpresionBinariaMayor.h"

ExpresionBinariaMayor::ExpresionBinariaMayor(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, MAYOR, numeroDeLinea)
{
    this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
}

Tipo* ExpresionBinariaMayor::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    /*Entero > Entero*/
    if( tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Entero)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Flotante > Flotante*/
    if( tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Flotante)
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Caracter > Caracter*/
    if( tipoIzquierda->tipo == Caracter && tipoDerecha->tipo == Caracter )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Caracter > Entero || Entero > Caracter*/
    if( (tipoIzquierda->tipo == Caracter && tipoDerecha->tipo == Entero) ||
        (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Caracter))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Entero > Flotante || Flotante > Entero*/
    if( (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Flotante) ||
        (tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Entero))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoBooleano();
        return Programa::obtenerInstancia()->obtenerTipoBooleano();
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipo incompatibles en operacion relacional mayor '>' ", numeroDeLinea));
}

string ExpresionBinariaMayor::generarCodigoJava()
{
    string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
    string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

    return "(" + codigoExpresionIzquierda + " > " + codigoExpresionDerecha + ")";
}
