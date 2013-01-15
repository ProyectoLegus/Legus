#ifndef INSTRUCCIONASIGNACION_H
#define INSTRUCCIONASIGNACION_H

#include <sstream>

#include "Instruccion.h"
#include "Expresion.h"
#include "Variable.h"
#include "Programa.h"

class InstruccionAsignacion : public Instruccion
{
public:
    InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente, int idDeExpresion);
    InstruccionAsignacion(Expresion *variable, Lista *listaIndices, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();
    Expresion*  obtenerVariable();
    Expresion*  obtenerExpresion();

private:
    Expresion *variable;
    Expresion *expresion;
    Lista     *listaIndices;
};

#endif // INSTRUCCIONASIGNACION_H
