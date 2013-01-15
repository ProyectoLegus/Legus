#include "InstruccionPara.h"

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
    return "";
}
