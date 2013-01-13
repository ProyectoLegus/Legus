#ifndef EXCEPCIONLEGUS_H
#define EXCEPCIONLEGUS_H

#include <iostream>
#include <string>

using namespace std;

class ExcepcionLegus
{
public:
    ExcepcionLegus(const string &mensaje);
    string obtenerMensaje();

private:
    string mensaje;
};

#endif // EXCEPCIONLEGUS_H
