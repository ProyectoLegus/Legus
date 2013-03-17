#ifndef EXPRESIONARREGLO_H
#define EXPRESIONARREGLO_H

#include "Expresion/Expresion.h"
#include "Programa/Programa.h"

class ExpresionArreglo : public Expresion
{
public:
    ExpresionArreglo(int numeroDeLinea);
    virtual Tipo* validarSemantica();
    virtual string generarCodigoJava();
};

#endif // EXPRESIONARREGLO_H
