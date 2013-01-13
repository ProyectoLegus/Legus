#ifndef GENERADORDEERRORES_H
#define GENERADORDEERRORES_H

#include <iostream>
#include <string>

using namespace std;

class GeneradorDeErrores
{
public:
    GeneradorDeErrores();
    static string obtenerTokenEsperado(int numeroDeToken);
};

#endif // GENERADORDEERRORES_H
