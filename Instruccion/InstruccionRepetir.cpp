#include "Instruccion/InstruccionRepetir.h"

InstruccionRepetir::InstruccionRepetir(Expresion *cantidad, Instruccion *instrucciones,
                                       Instruccion *siguiente, int idDeExpresion,
                                       int numeroDeLinea)
    :Instruccion(siguiente, REPETIR, idDeExpresion,numeroDeLinea)
{
    this->cantidad = cantidad;
    this->instrucciones = instrucciones;
}

void InstruccionRepetir::validarSemantica()
{
    if( cantidad != 0)
    {
        // Entra aqui si viene una expresion, esta deberia
        // reducir a entero
        Tipo* tipoCantidad = cantidad->validarSemantica();

        if( tipoCantidad->tipo != Entero )
        {
            throw(ExcepcionLegus("Expresion en instruccion 'repetir' debe evaluar a entero",numeroDeLinea));
        }
    }
    else
    {
        // Aqui no se hace nada, la expresion reduce a infinito
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

    if( cantidad != 0)
    {
        codigoInstruccionRepetir << "for( int $$i = 0; $$i < ";
        codigoInstruccionRepetir << this->cantidad->generarCodigoJava();
        codigoInstruccionRepetir << " ; $$i++)";
    }
    else
    {
        codigoInstruccionRepetir << "while(true)";
    }
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
