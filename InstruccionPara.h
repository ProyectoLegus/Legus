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
    InstruccionPara(string *identificador,Expresion *inicio, Expresion *final, Instruccion *instrucciones ,Instruccion *siguiente);

private:
    string *identificador;
    Expresion *inicio;
    Expresion *final;
    Instruccion *instrucciones;
};

#endif // INSTRUCCIONPARA_H
