#include "InstruccionSi.h"

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
    return "";
}
