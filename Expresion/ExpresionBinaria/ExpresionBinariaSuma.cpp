#include "Expresion/ExpresionBinaria/ExpresionBinariaSuma.h"

ExpresionBinariaSuma::ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, SUMA,numeroDeLinea)
{

}

Tipo* ExpresionBinariaSuma::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    /*Entero + Entero */
    if( (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Entero) )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    /*Flotante + Flotante*/
    if( tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Flotante )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    /*Cadena + Cadena*/
    if( tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Cadena )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Entero || Entero + Cadena*/
    if( (tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Entero) ||
        (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Flotante || Flotante + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Flotante)||
       (tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Caracter || Caracter + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Caracter)||
       (tipoIzquierda->tipo == Caracter && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*En duda...*/
    /*Cadena + Booleano || Booleano + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Booleano)||
       (tipoIzquierda->tipo == Booleano && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipos incompatibles en operacion suma '+' "));
}

string ExpresionBinariaSuma::generarCodigoJava()
{
    string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
    string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

    /*Analizar los casos de cadena, caracter */
    return "(" + codigoExpresionIzquierda + " + " + codigoExpresionDerecha + ")";
}
