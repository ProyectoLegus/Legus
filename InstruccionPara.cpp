#include "InstruccionPara.h"

InstruccionPara::InstruccionPara(InstruccionAsignacion *instruccionAsignacion, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente, PARA)
{
    this->instruccionAsignacion = instruccionAsignacion;
    this->final = final;
    this->instrucciones = instrucciones;
}

void InstruccionPara::validarSemantica()
{
    /*Validar InstruccionAsignacion*/

    Tipo* tipoExpresionFinal = final->validarSemantica();

    if( tipoExpresionFinal->tipo != Entero)
    {
        // ERRORw
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
