#ifndef EXPRESIONLITERALCARACTER_H
#define EXPRESIONLITERALCARACTER_H

#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralCaracter : public Expresion
{
public:
    ExpresionLiteralCaracter(char valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();

private:
    char valor;
};

#endif // EXPRESIONLITERALCARACTER_H
