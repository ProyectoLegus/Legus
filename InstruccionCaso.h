#ifndef INSTRUCCIONCASO_H
#define INSTRUCCIONCASO_H

#include <sstream>

#include "Instruccion.h"
#include "Expresion.h"
#include "ListaDeCaso.h"

class InstruccionCaso : public Instruccion
{
public:
    InstruccionCaso(Expresion *expresion, ListaDeCaso *listaDeCaso, Instruccion *instrucciones_sino, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *expresion;
    ListaDeCaso *listaDeCaso;
    Instruccion *instrucciones_sino;
};

#endif // INSTRUCCIONCASO_H
