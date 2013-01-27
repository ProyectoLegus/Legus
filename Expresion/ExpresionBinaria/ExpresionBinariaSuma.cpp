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

    /*Arreglos*/
    if( tipoIzquierda->tipo == Arreglo || tipoDerecha->tipo == Arreglo )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoArreglo();
        return this->tipoInferido;
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipos incompatibles en operacion suma '+' "));
}

string ExpresionBinariaSuma::generarCodigoJava()
{
    if( tipoInferido->tipo == Arreglo )
    {
        /*Ver caso en que ambos sean arreglos o que uno de los 2 es arrego*/
        stringstream codigo;
        Tipo* tipoIzquierda = obtenerExpresionIzquierda()->tipoInferido;
        Tipo* tipoDerecha = obtenerExpresionDerecha()->tipoInferido;

        if( tipoIzquierda->tipo == Arreglo &&
            tipoDerecha->tipo == Arreglo)
        {
            /*Si ambos son arreglos
                Llamar a una funcion built-in que
                concatene ambos arreglos
            */
        }
        else if(tipoIzquierda->tipo != Arreglo &&
                tipoDerecha->tipo == Arreglo)
        {
            /*Izquierda es la que hay que agregar*/
            codigo << ".add(";
            codigo << codigoExpresion(obtenerExpresionIzquierda());
            codigo << ")";
        }
        else if( tipoDerecha->tipo != Arreglo &&
                 tipoIzquierda->tipo == Arreglo)

        {
            /*Revisar lo del boxing on box*/
            /*Derecha es la que hay que agregar*/
            codigo << ".add(";
            codigo << codigoExpresion(obtenerExpresionDerecha());
            codigo << ")";
        }
        return codigo.str();
    }
    else
    {
        string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
        string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

        /*Analizar los casos de cadena, caracter */
        return "(" + codigoExpresionIzquierda + " + " + codigoExpresionDerecha + ")";
    }
}

string ExpresionBinariaSuma::codigoExpresion(Expresion *expresion)
{
    stringstream codigo;

    if( expresion->tipoInferido->tipo == Entero )
    {
        codigo << "new Integer(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Flotante)
    {
        codigo << "new Float(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Booleano)
    {
        codigo << "new Boolean(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Caracter)
    {
        codigo << "new Character(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else
    {
        codigo << expresion->generarCodigoJava();
    }

    return codigo.str();
}
