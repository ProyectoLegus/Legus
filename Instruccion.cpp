#include "Instruccion.h"

Instruccion::Instruccion( Instruccion *siguiente, Instrucciones tipo, int idDeExpresion)
{
    this->siguiente = siguiente;
    this->tipo = tipo;
    this->idDeExpresion = idDeExpresion;
}

void Instruccion::establecerSiguiente(Instruccion *siguiente)
{
    this->siguiente = siguiente;
}

Instruccion* Instruccion::obtenerSiguiente()
{
    return this->siguiente;
}

Instrucciones Instruccion::obtenerTipo()
{
    return tipo;
}
