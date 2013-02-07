#ifndef FUNCIONESINCORPORADAS_H
#define FUNCIONESINCORPORADAS_H

enum TipoParametro
{
    TEntero,TCadena,TCaracter,
    TBooleano,TFlotante
};

#include <iostream>
#include <vector>
#include <map>
#include <stdio.h>
#include "stdarg.h"

#include "Bison_Flex/Lista.h"
#include "Programa/Programa.h"

using namespace std;

class FuncionesIncorporadas
{
public:
    FuncionesIncorporadas();
    map<string, vector<vector<TipoParametro>*>*> obtenerFuncionesIncorporadas();

private:
    vector<TipoParametro>* obtenerVectorParametros(int cantidadArgumentos, ...);
};

#endif // FUNCIONESINCORPORADAS_H
