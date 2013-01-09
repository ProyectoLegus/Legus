#ifndef EXPRESIONLITERALCARACTER_H
#define EXPRESIONLITERALCARACTER_H

#include "Expresion.h"

class ExpresionLiteralCaracter : public Expresion
{
public:
    ExpresionLiteralCaracter(char valor);

private:
    char valor;
};

#endif // EXPRESIONLITERALCARACTER_H
