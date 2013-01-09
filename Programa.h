#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <iostream>
#include <vector>
#include "Instruccion.h"
#include "DeclaracionDeFuncion.h"
#include "DeclaracionUtilizar.h"

using namespace std;

class Programa
{
public:
    static Programa* obtenerInstancia();
    Instruccion *instrucciones;
    vector<DeclaracionDeFuncion*> *tablaDeFunciones;
    vector<DeclaracionUtilizar*> *tablaDePuertosYSensores;

private:
    Programa();
    static Programa* instancia;
};

#endif // PROGRAMA_H
