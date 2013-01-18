#include "Expresion/ExpresionBinaria/ExpresionBinariaDivisionEntera.h"

ExpresionBinariaDivisionEntera::ExpresionBinariaDivisionEntera(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, DIVISIONENTERA, numeroDeLinea)
{
}

Tipo* ExpresionBinariaDivisionEntera::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    /*Entero - Entero */
    if( (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Entero) )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    /*Flotante - Flotante*/
    if( tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Flotante )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    /*Entero - Flotante || Flotante + Entero*/
    if((tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Flotante)||
       (tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Entero))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    throw(ExcepcionLegus("Tipos incompatibles en operacion division entera 'div' ", numeroDeLinea));
}

string ExpresionBinariaDivisionEntera::generarCodigoJava()
{
    return "";
}
