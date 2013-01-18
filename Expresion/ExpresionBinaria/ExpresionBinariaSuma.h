#ifndef EXPRESIONBINARIASUMA_H
#define EXPRESIONBINARIASUMA_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaSuma : public ExpresionBinaria
{
public:
    ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

};

#endif // EXPRESIONBINARIASUMA_H
