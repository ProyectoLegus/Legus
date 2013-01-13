#ifndef EXPRESIONLITERALFLOTANTE_H
#define EXPRESIONLITERALFLOTANTE_H

#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralFlotante : public Expresion
{
public:
    ExpresionLiteralFlotante(float valor);
    virtual Tipo* validarSemantica();

private:
    float valor;
};

#endif // EXPRESIONLITERALFLOTANTE_H
