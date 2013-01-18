#ifndef EXPRESIONLITERALBOOLEANA_H
#define EXPRESIONLITERALBOOLEANA_H

#include "Expresion/Expresion.h"
#include "Programa/Programa.h"

class ExpresionLiteralBooleana : public Expresion
{
public:
    ExpresionLiteralBooleana(bool valor, int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();

private:
    bool valor;
};

#endif // EXPRESIONLITERALBOOLEANA_H
