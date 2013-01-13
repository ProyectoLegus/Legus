#ifndef INSTRUCCIONPARA_H
#define INSTRUCCIONPARA_H

#include <iostream>
#include <string>

#include "Instruccion.h"
#include "InstruccionAsignacion.h"
#include "Expresion.h"

using namespace std;

class InstruccionPara : public Instruccion
{
public:
    InstruccionPara(InstruccionAsignacion *instruccionAsignacion, Expresion *final, Instruccion *instrucciones ,Instruccion *siguiente);
    virtual void validarSemantica();

private:
    InstruccionAsignacion *instruccionAsignacion;
    Expresion *final;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONPARA_H
