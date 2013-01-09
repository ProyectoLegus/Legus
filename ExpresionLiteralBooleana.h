#ifndef EXPRESIONLITERALBOOLEANA_H
#define EXPRESIONLITERALBOOLEANA_H

#include "Expresion.h"

class ExpresionLiteralBooleana : public Expresion
{
public:
    ExpresionLiteralBooleana(bool valor);

private:
    bool valor;
};

#endif // EXPRESIONLITERALBOOLEANA_H
