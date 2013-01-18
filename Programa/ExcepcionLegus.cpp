#include "Programa/ExcepcionLegus.h"

ExcepcionLegus::ExcepcionLegus(const string &mensaje)
{
    this->mensaje = mensaje;
    this->numeroDeLinea = 0;
}

ExcepcionLegus::ExcepcionLegus(const string &mensaje, const int numeroDeLinea)
{
    this->mensaje = mensaje;
    this->numeroDeLinea = numeroDeLinea;
}

string ExcepcionLegus::obtenerMensaje()
{
    return mensaje;
}

int ExcepcionLegus::obtenerNumeroDeLinea()
{
    return numeroDeLinea;
}
