#include "Instruccion/InstruccionSi.h"

InstruccionSi::InstruccionSi(Expresion *condicion, Instruccion *instruccionesSiVerdadero, Instruccion *instruccionesSiFalso, Instruccion *instruccionSiAnidado, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente,SI,idDeExpresion)
{
    this->condicion = condicion;
    this->instruccionesSiVerdadero = instruccionesSiVerdadero;
    this->instruccionesSiFalso = instruccionesSiFalso;
    this->instruccionSiAnidado = instruccionSiAnidado;
}

void InstruccionSi::validarSemantica()
{
    Tipo* tipoCondicion = this->condicion->validarSemantica();

    if( tipoCondicion != Programa::obtenerInstancia()->obtenerTipoBooleano() )
    {
        throw( ExcepcionLegus( "La expresion de la instruccion 'si' debe evaluar a Booleano" ) );
    }

    if(instruccionesSiVerdadero!=0)
    {
        instruccionesSiVerdadero->validarSemantica();
        if( instruccionesSiVerdadero->obtenerSiguiente() != 0)
        {
            instruccionesSiVerdadero->obtenerSiguiente()->validarSemantica();
        }
    }

    if(instruccionesSiFalso!=0)
    {
        instruccionesSiFalso->validarSemantica();
        if( instruccionesSiFalso->obtenerSiguiente() != 0)
        {
            instruccionesSiFalso->obtenerSiguiente()->validarSemantica();
        }
    }
    /*if(instruccionSiAnidado!=0)
    {
        instruccionSiAnidado->validarSemantica();
    }*/
}

string InstruccionSi::generarCodigoJava()
{
    string codigoExpresion = this->condicion->generarCodigoJava();

    stringstream codigoInstruccionSi;

    /*SI...*/
    codigoInstruccionSi << "if( " << codigoExpresion << " )";
    codigoInstruccionSi << "\n{\n";

    if( this->instruccionesSiVerdadero != 0)
    {
        codigoInstruccionSi << this->instruccionesSiVerdadero->generarCodigoJava();
        if( instruccionesSiVerdadero->obtenerSiguiente() != 0)
        {
            Instruccion *actual = instruccionesSiVerdadero->obtenerSiguiente();
            while(actual!=0)
            {
                codigoInstruccionSi << actual->generarCodigoJava();
                actual = actual->obtenerSiguiente();
            }
        }
    }
    codigoInstruccionSi << "\n}\n";

    /*Sino...*/
    if( this->instruccionesSiFalso != 0)
    {
        codigoInstruccionSi << "else" << "\n{\n";
        codigoInstruccionSi << this->instruccionesSiFalso->generarCodigoJava();

        if( this->instruccionSiAnidado != 0 )
        {
            codigoInstruccionSi << instruccionesSiFalso->generarCodigoJava();
            if( instruccionesSiFalso->obtenerSiguiente() != 0)
            {
                Instruccion *actual = instruccionesSiFalso->obtenerSiguiente();
                while(actual!=0)
                {
                    codigoInstruccionSi << actual->generarCodigoJava();
                    actual = actual->obtenerSiguiente();
                }
            }
        }

        codigoInstruccionSi << "\n}\n";
    }

    return codigoInstruccionSi.str();
}
