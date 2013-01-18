#ifndef EXPRESIONLITERALENTERA_H
#define EXPRESIONLITERALENTERA_H

#include "Expresion/Expresion.h"
#include "Programa/Programa.h"
#include <sstream>

class ExpresionLiteralEntera : public Expresion
{
public:
    ExpresionLiteralEntera(int valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    int valor;
};

#endif // EXPRESIONLITERALENTERA_H
