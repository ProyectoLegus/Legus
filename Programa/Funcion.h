#ifndef FUNCION_H
#define FUNCION_H

#include <iostream>
#include <string>
#include <vector>

#include "Programa/Tipos/Tipo.h"
#include "Programa/FuncionesIncorporadas.h"

using namespace std;

class Funcion
{
public:
    Funcion(Tipo* tipoDeRetorno, vector<TipoParametro>* parametros);
    Funcion(Tipo* tipoDeRetorno, vector<TipoParametro>* parametros, string *codigo);
    Tipo* tipoDeRetorno;
    vector<TipoParametro>* parametros;
    string *codigo;
};

#endif // FUNCION_H
