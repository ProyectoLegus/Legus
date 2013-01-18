#ifndef EXPRESIONBINARIAMAYORIGUAL_H
#define EXPRESIONBINARIAMAYORIGUAL_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaMayorIgual : public ExpresionBinaria
{
public:
    ExpresionBinariaMayorIgual(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMAYORIGUAL_H
