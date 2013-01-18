#ifndef EXPRESIONLITERALCARACTER_H
#define EXPRESIONLITERALCARACTER_H

#include <sstream>
#include "Expresion.h"
#include "Programa.h"

class ExpresionLiteralCaracter : public Expresion
{
public:
    ExpresionLiteralCaracter(char valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    char valor;
};

#endif // EXPRESIONLITERALCARACTER_H
