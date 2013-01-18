#ifndef EXPRESIONBINARIAMENORIGUAL_H
#define EXPRESIONBINARIAMENORIGUAL_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaMenorIgual : public ExpresionBinaria
{
public:
    ExpresionBinariaMenorIgual(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMENORIGUAL_H
