#include "InstruccionPara.h"

InstruccionPara::InstruccionPara(string *identificador,Expresion *inicio, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente, PARA)
{
    this->identificador = identificador;
    this->inicio = inicio;
    this->final = final;
    this->instrucciones = instrucciones;
}
