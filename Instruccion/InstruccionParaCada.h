#ifndef INSTRUCCIONPARACADA_H
#define INSTRUCCIONPARACADA_H

#include "Instruccion.h"
#include "Expresion.h"
#include <sstream>

class InstruccionParaCada : public Instruccion
{
public:
    InstruccionParaCada(Expresion *variable, Expresion *coleccion_arreglo, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *variable;
    Expresion *coleccion_arreglo;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONPARACADA_H
