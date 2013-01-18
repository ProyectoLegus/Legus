#ifndef EXPRESIONLITERALCARACTER_H
#define EXPRESIONLITERALCARACTER_H

#include <sstream>
#include "Expresion/Expresion.h"
#include "Programa/Programa.h"

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
