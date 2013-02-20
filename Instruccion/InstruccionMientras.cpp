#include "Instruccion/InstruccionMientras.h"

InstruccionMientras::InstruccionMientras(Expresion *condicion, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, MIENTRAS, idDeExpresion)
{
    this->condicion = condicion;
    this->instrucciones = instrucciones;
}

void InstruccionMientras::validarSemantica()
{
    Tipo *tipoExpresion = condicion->validarSemantica();

    if( tipoExpresion != Programa::obtenerInstancia()->obtenerTipoBooleano() )
    {
        throw(ExcepcionLegus("La expresion de la instruccion 'mientras' debe evaluar a booleano"));
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

string InstruccionMientras::generarCodigoJava()
{
    string codigoExpresion = this->condicion->generarCodigoJava();
    stringstream codigoInstruccionMientras;

    codigoInstruccionMientras << "while( " << codigoExpresion << ")";
    codigoInstruccionMientras << "\n{\n";

    if( this->instrucciones != 0)
    {
        codigoInstruccionMientras << this->instrucciones->generarCodigoJava();
        if( instrucciones->obtenerSiguiente() != 0)
        {
            Instruccion *actual = instrucciones->obtenerSiguiente();
            while( actual != 0)
            {
                codigoInstruccionMientras << actual->generarCodigoJava();
                actual = actual->obtenerSiguiente();
            }
        }
    }

    codigoInstruccionMientras << "\n}\n";

    return codigoInstruccionMientras.str();
}
