#include "Instruccion/ListaDeCaso.h"

ListaDeCaso::ListaDeCaso(Expresion *expresion_caso, Instruccion *instrucciones, ListaDeCaso *siguiente)
{
    this->expresion_caso = expresion_caso;
    this->instrucciones = instrucciones;
    this->siguiente = siguiente;
}

void ListaDeCaso::establecerSiguiente(ListaDeCaso *siguiente)
{
    this->siguiente = siguiente;
}

ListaDeCaso* ListaDeCaso::obtenerSiguiente()
{
    return this->siguiente;
}

Expresion* ListaDeCaso::obtenerExpresion()
{
    return this->expresion_caso;
}

Instruccion* ListaDeCaso::obtenerInstruccion()
{
    return this->instrucciones;
}
