#ifndef EXCEPCIONLEGUS_H
#define EXCEPCIONLEGUS_H

#include <iostream>
#include <string>

using namespace std;

class ExcepcionLegus
{
public:
    ExcepcionLegus(const string &mensaje);
    ExcepcionLegus(const string &mensaje, const int numeroDeLinea);
    string obtenerMensaje();
    int    obtenerNumeroDeLinea();

private:
    string mensaje;
    int numeroDeLinea;
};

#endif // EXCEPCIONLEGUS_H
