#include "InstruccionRepitaDesde.h"

InstruccionRepitaDesde::InstruccionRepitaDesde(Expresion *inicio, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente)
    :Instruccion(siguiente,REPITADESDE)
{
    this->inicio = inicio;
    this->final = final;
    this->instrucciones = instrucciones;
}

void InstruccionRepitaDesde::validarSemantica()
{

}
