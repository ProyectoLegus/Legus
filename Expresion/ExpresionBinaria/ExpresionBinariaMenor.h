#ifndef EXPRESIONBINARIAMENOR_H
#define EXPRESIONBINARIAMENOR_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaMenor : public ExpresionBinaria
{
public:
    ExpresionBinariaMenor(Expresion *izquierda, Expresion *derecha,
                          int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIAMENOR_H
