#ifndef EXPRESIONLITERALFLOTANTE_H
#define EXPRESIONLITERALFLOTANTE_H

#include "Expresion.h"

class ExpresionLiteralFlotante : public Expresion
{
public:
    ExpresionLiteralFlotante(float valor);

private:
    float valor;
};

#endif // EXPRESIONLITERALFLOTANTE_H
