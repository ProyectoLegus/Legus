#ifndef INSTRUCCIONPARA_H
#define INSTRUCCIONPARA_H

#include <iostream>
#include <string>
#include <sstream>

#include "Instruccion/Instruccion.h"
#include "Instruccion/InstruccionAsignacion.h"
#include "Expresion/Expresion.h"

using namespace std;

class InstruccionPara : public Instruccion
{
public:
    InstruccionPara(InstruccionAsignacion *instruccionAsignacion, Expresion *final,
                    Instruccion *instrucciones ,Instruccion *siguiente,
                    int idDeExpresion, int numeroDeLinea);
    virtual void validarSemantica();
    virtual string generarCodigoJava();

private:
    InstruccionAsignacion *instruccionAsignacion;
    Expresion *final;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONPARA_H
