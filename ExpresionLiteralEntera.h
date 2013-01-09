#ifndef EXPRESIONLITERALENTERA_H
#define EXPRESIONLITERALENTERA_H

#include "Expresion.h"

class ExpresionLiteralEntera : public Expresion
{
public:
    ExpresionLiteralEntera(int valor);

private:
    int valor;
};

#endif // EXPRESIONLITERALENTERA_H
