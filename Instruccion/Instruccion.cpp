#include "Instruccion/Instruccion.h"

Instruccion::Instruccion( Instruccion *siguiente, Instrucciones tipo, int idDeExpresion, int numeroDeLinea)
{
    this->siguiente = siguiente;
    this->tipo = tipo;
    this->idDeExpresion = idDeExpresion;
    this->numeroDeLinea = numeroDeLinea;
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
