#ifndef EXPRESIONINSTANCIADE_H
#define EXPRESIONINSTANCIADE_H

#include "Expresion/Expresion.h"
#include <sstream>

class ExpresionInstanciaDe : public Expresion
{
public:
    ExpresionInstanciaDe(Expresion *expresion, TipoDato tipoDato, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    Expresion *expresion;
    TipoDato tipoDato;
    string   obtenerTipoDeDato(TipoDato tipoDato);
};

#endif // EXPRESIONINSTANCIADE_H
