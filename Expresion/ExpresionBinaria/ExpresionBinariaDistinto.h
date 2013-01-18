#ifndef EXPRESIONBINARIADISTINTO_H
#define EXPRESIONBINARIADISTINTO_H

#include "Expresion/ExpresionBinaria/ExpresionBinaria.h"
#include "Programa/Programa.h"

class ExpresionBinariaDistinto : public ExpresionBinaria
{
public:
    ExpresionBinariaDistinto(Expresion *izquierda, Expresion *derecha, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONBINARIADISTINTO_H
