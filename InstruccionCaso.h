#ifndef INSTRUCCIONCASO_H
#define INSTRUCCIONCASO_H

#include "Instruccion.h"
#include "Expresion.h"
#include "ListaDeCaso.h"

class InstruccionCaso : public Instruccion
{
public:
    InstruccionCaso(Expresion *expresion, ListaDeCaso *listaDeCaso, Instruccion *instrucciones_sino, Instruccion *siguiente);
    virtual void validarSemantica();

private:
    Expresion *expresion;
    ListaDeCaso *listaDeCaso;
    Instruccion *instrucciones_sino;
};

#endif // INSTRUCCIONCASO_H
