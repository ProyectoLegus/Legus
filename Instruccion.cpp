#include "Instruccion.h"

Instruccion::Instruccion( Instruccion *siguiente, Instrucciones tipo)
{
    this->siguiente = siguiente;
    this->tipo = tipo;
}

void Instruccion::establecerSiguiente(Instruccion *siguiente)
{
    this->siguiente = siguiente;
}

Instruccion* Instruccion::obtenerSiguiente()
{
    return this->siguiente;
}
