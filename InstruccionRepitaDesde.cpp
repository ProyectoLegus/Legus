#include "InstruccionRepitaDesde.h"

InstruccionRepitaDesde::InstruccionRepitaDesde(Expresion *inicio, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente,REPITADESDE, idDeExpresion)
{
    this->inicio = inicio;
    this->final = final;
    this->instrucciones = instrucciones;
}

void InstruccionRepitaDesde::validarSemantica()
{
    Tipo* tipoExpresionInicial = inicio->validarSemantica();
    Tipo* tipoExpresionFinal   = final->validarSemantica();

    if( tipoExpresionInicial->tipo != Entero)
    {
        throw(ExcepcionLegus("Expresion inicial en instruccion 'repita desde' debe evaluar a entero"));
    }

    if( tipoExpresionFinal->tipo != Entero)
    {
        throw(ExcepcionLegus("Expresion final en instruccion 'repita desde' debe evaluar a entero"));
    }
}

string InstruccionRepitaDesde::generarCodigoJava()
{
    return "";
}
