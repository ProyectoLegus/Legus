#ifndef INSTRUCCIONREPITADESDE_H
#define INSTRUCCIONREPITADESDE_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include <sstream>

class InstruccionRepitaDesde : public Instruccion
{
public:
    InstruccionRepitaDesde(Expresion *inicio, Expresion *final, Instruccion *instrucciones, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *inicio;
    Expresion *final;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONREPITADESDE_H
