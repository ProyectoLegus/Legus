#ifndef EXPRESIONLITERALFLOTANTE_H
#define EXPRESIONLITERALFLOTANTE_H

#include "Expresion/Expresion.h"
#include "Programa/Programa.h"

#include <sstream>

class ExpresionLiteralFlotante : public Expresion
{
public:
    ExpresionLiteralFlotante(float valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    float valor;
};

#endif // EXPRESIONLITERALFLOTANTE_H
