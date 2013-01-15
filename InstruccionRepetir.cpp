    #include "InstruccionRepetir.h"

InstruccionRepetir::InstruccionRepetir(Expresion *cantidad, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, REPETIR, idDeExpresion)
{
    this->cantidad = cantidad;
    this->instrucciones = instrucciones;
}

void InstruccionRepetir::validarSemantica()
{
    Tipo* tipoCantidad = cantidad->validarSemantica();

    if( tipoCantidad->tipo != Entero )
    {
        throw(ExcepcionLegus("Expresion en instruccion 'repetir' debe evaluar a entero"));
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

string InstruccionRepetir::generarCodigoJava()
{
    stringstream codigoInstruccionRepetir;

    codigoInstruccionRepetir << "for( int $$i = 0; $$i < ";
    codigoInstruccionRepetir << this->cantidad->generarCodigoJava();
    codigoInstruccionRepetir << " ; $$i++)";
    codigoInstruccionRepetir << "\n{\n";

    if( this->instrucciones != 0)
    {
        codigoInstruccionRepetir << this->instrucciones->generarCodigoJava();
    }

    codigoInstruccionRepetir << "\n}\n";

    return codigoInstruccionRepetir.str();
}
