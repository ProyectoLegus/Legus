#include "Instruccion/InstruccionRepitaDesde.h"

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

    if( instrucciones != 0)
    {
        instrucciones->validarSemantica();
        if( instrucciones->obtenerSiguiente() != 0)
        {
            instrucciones->obtenerSiguiente()->validarSemantica();
        }
    }
}

string InstruccionRepitaDesde::generarCodigoJava()
{
    stringstream codigoInstruccionRepetir;

    codigoInstruccionRepetir << "for( int $$i = ";
    codigoInstruccionRepetir << this->inicio->generarCodigoJava();
    codigoInstruccionRepetir << "; $$i < ";
    codigoInstruccionRepetir << this->final->generarCodigoJava();
    codigoInstruccionRepetir << " ; $$i++)";
    codigoInstruccionRepetir << "\n{\n";

    if( this->instrucciones != 0)
    {
        codigoInstruccionRepetir << this->instrucciones->generarCodigoJava();
        if( instrucciones->obtenerSiguiente() != 0)
        {
            Instruccion *actual = instrucciones->obtenerSiguiente();
            while(actual!=0)
            {
                codigoInstruccionRepetir << actual->generarCodigoJava();
                actual = actual->obtenerSiguiente();
            }
        }
    }

    codigoInstruccionRepetir << "\n}\n";

    return codigoInstruccionRepetir.str();
}
