#include "Instruccion/InstruccionPara.h"

InstruccionPara::InstruccionPara(InstruccionAsignacion *instruccionAsignacion, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion)
    :Instruccion(siguiente, PARA, idDeExpresion)
{
    this->instruccionAsignacion = instruccionAsignacion;
    this->final = final;
    this->instrucciones = instrucciones;
}

void InstruccionPara::validarSemantica()
{
    /*Validar InstruccionAsignacion*/
    Tipo* tipoExpresionInicial = instruccionAsignacion->obtenerExpresion()->validarSemantica();
    Tipo* tipoExpresionFinal = final->validarSemantica();

    if( tipoExpresionInicial->tipo != Entero )
    {
        throw(ExcepcionLegus("Expresion inicial en instruccion 'para' debe evaluar a entero"));
    }

    if( tipoExpresionFinal->tipo != Entero)
    {
        throw(ExcepcionLegus("Expresion final en instruccion 'para' debe evaluar a entero"));
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

string InstruccionPara::generarCodigoJava()
{
    stringstream codigoInstruccionPara;

    string codigoExpresionInicial = this->instruccionAsignacion->generarCodigoJava();
    string codigoExpersionFinal = this->final->generarCodigoJava();

    /*Falta variable++*/
    codigoInstruccionPara << "for( ";
    codigoInstruccionPara << codigoExpresionInicial;
    codigoInstruccionPara << "; ";
    codigoInstruccionPara << codigoExpersionFinal;
    codigoInstruccionPara << "; CAMBIARESTO++ )";
    codigoInstruccionPara << "\n{\n";

    if( this->instrucciones != 0)
    {
        codigoInstruccionPara << instrucciones->generarCodigoJava();
        if( instrucciones->obtenerSiguiente() != 0)
        {
            Instruccion *actual = instrucciones->obtenerSiguiente();
            while(actual!=0)
            {
                codigoInstruccionPara << actual->generarCodigoJava();
                actual = actual->obtenerSiguiente();
            }
        }
    }

    codigoInstruccionPara << "\n}\n";

    return codigoInstruccionPara.str();
}
