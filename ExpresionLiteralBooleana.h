#ifndef EXPRESIONLITERALBOOLEANA_H
#define EXPRESIONLITERALBOOLEANA_H

#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralBooleana : public Expresion
{
public:
    ExpresionLiteralBooleana(bool valor);
    virtual Tipo* validarSemantica();

private:
    bool valor;
};

#endif // EXPRESIONLITERALBOOLEANA_H
