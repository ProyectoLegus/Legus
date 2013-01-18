#ifndef TABLADEFUNCIONES_H
#define TABLADEFUNCIONES_H

#include "Programa/DeclaracionDeFuncion.h"

#include <iostream>
#include <vector>

using namespace std;

class TablaDeFunciones
{
public:
    TablaDeFunciones();
    vector<DeclaracionDeFuncion*> tablaDeFunciones;
};

#endif // TABLADEFUNCIONES_H
