#ifndef EXPRESIONLITERALENTERA_H
#define EXPRESIONLITERALENTERA_H

#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralEntera : public Expresion
{
public:
    ExpresionLiteralEntera(int valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();

private:
    int valor;
};

#endif // EXPRESIONLITERALENTERA_H
