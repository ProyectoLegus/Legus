#ifndef INSTRUCCIONASIGNACION_H
#define INSTRUCCIONASIGNACION_H

#include <sstream>

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include "Expresion/Variables/Variable.h"
#include "Expresion/Variables/VariableArreglo.h"
#include "Programa/Programa.h"

class InstruccionAsignacion : public Instruccion
{
public:
    InstruccionAsignacion(Expresion *variable, Expresion *expresion, Instruccion *siguiente, int idDeExpresion);
    InstruccionAsignacion(VariableArreglo *variable, Lista *listaIndices, Instruccion *siguiente, int idDeExpresion);
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
