#ifndef LISTADECASO_H
#define LISTADECASO_H

#include "Expresion/Expresion.h"
#include "Instruccion/Instruccion.h"

class ListaDeCaso
{
public:
    ListaDeCaso(Expresion *expresion_caso, Instruccion *instrucciones, ListaDeCaso *siguiente);
    void establecerSiguiente(ListaDeCaso *siguiente);

private:
    Expresion   *expresion_caso;
    Instruccion *instrucciones;
    ListaDeCaso *siguiente;
};

#endif // LISTADECASO_H
