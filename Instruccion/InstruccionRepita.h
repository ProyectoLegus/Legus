#ifndef INSTRUCCIONREPITA_H
#define INSTRUCCIONREPITA_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include "Programa/Programa.h"
#include <sstream>

class InstruccionRepita : public Instruccion
{
public:
    InstruccionRepita(Expresion *condicion, Instruccion *siguiente,
                      int idDeExpresion, int numeroDeLinea);
    virtual void validarSemantica();
    Expresion* obtenerCondicion();
    virtual string generarCodigoJava();

private:
    Expresion *condicion;

};

#endif // INSTRUCCIONREPITA_H
