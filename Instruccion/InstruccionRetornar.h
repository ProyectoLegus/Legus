#ifndef INSTRUCCIONRETORNAR_H
#define INSTRUCCIONRETORNAR_H

#include "Instruccion/Instruccion.h"
#include "Expresion/Expresion.h"
#include <sstream>

class InstruccionRetornar : public Instruccion
{
public:
    InstruccionRetornar(Expresion *expresion_de_retorno, Instruccion *siguiente, int idDeExpresion);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

    void establecerTipoDeRetorno(Tipo *tipoDeRetorno);
    Tipo* obtenerTipoDeRetorno();

private:
    Expresion *expresion_de_retorno;
    Tipo* tipoDeRetorno;
};

#endif // INSTRUCCIONRETORNAR_H
