#ifndef EXPRESIONBINARIAMAYOR_H
#define EXPRESIONBINARIAMAYOR_H

#include "ExpresionBinaria.h"
#include "Programa.h"

class ExpresionBinariaMayor : public ExpresionBinaria
{
public:
    ExpresionBinariaMayor(Expresion *izquierda, Expresion *derecha);
    virtual Tipo* validarSemantica();
};

#endif // EXPRESIONBINARIAMAYOR_H
