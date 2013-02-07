#include "ExpresionInstanciaDe.h"
#include "Programa/Programa.h"

ExpresionInstanciaDe::ExpresionInstanciaDe(Expresion *expresion, TipoDato tipoDato, int numeroDeLinea)
    :Expresion(INSTANCIADE, numeroDeLinea)
{
    this->expresion = expresion;
    this->tipoDato = tipoDato;
}

Tipo* ExpresionInstanciaDe::validarSemantica()
{
    if(expresion != 0)
    {
        expresion->validarSemantica();
    }

    return Programa::obtenerInstancia()->obtenerTipoBooleano();
}

string ExpresionInstanciaDe::generarCodigoJava()
{
    stringstream codigo;

    codigo << expresion->generarCodigoJava();
    codigo << " instanceof ";
    codigo << obtenerTipoDeDato( this->tipoDato );

    return codigo.str();
}

string ExpresionInstanciaDe::obtenerTipoDeDato(TipoDato tipoDato)
{
    stringstream codigoTipoDato;

    if( tipoDato == ENTERO)
    {
        codigoTipoDato << " Integer ";
    }
    else if( tipoDato == FLOTANTE)
    {
        codigoTipoDato << " Float ";
    }
    else if( tipoDato == CADENA)
    {
        codigoTipoDato << " String ";
    }
    else if( tipoDato == CARACTER)
    {
        codigoTipoDato << " Character ";
    }
    else if( tipoDato == BOOLEANO)
    {
        codigoTipoDato << " Boolean ";
    }

    return codigoTipoDato.str();
}
