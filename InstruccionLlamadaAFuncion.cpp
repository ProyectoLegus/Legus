#include "InstruccionLlamadaAFuncion.h"

InstruccionLlamadaAFuncion::InstruccionLlamadaAFuncion(string *identificador, Lista *lista_parametros, Instruccion *siguiente)
    :Instruccion(siguiente, LLAMADAAFUNCION)
{
    this->identificador = identificador;
    this->lista_parametros = lista_parametros;
}
