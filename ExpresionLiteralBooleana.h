#ifndef EXPRESIONLITERALBOOLEANA_H
#define EXPRESIONLITERALBOOLEANA_H

#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralBooleana : public Expresion
{
public:
    ExpresionLiteralBooleana(bool valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();

private:
    bool valor;
};

#endif // EXPRESIONLITERALBOOLEANA_H
