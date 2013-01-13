#include "ExcepcionLegus.h"

ExcepcionLegus::ExcepcionLegus(const string &mensaje)
{
    this->mensaje = mensaje;
}

string ExcepcionLegus::obtenerMensaje()
{
    return mensaje;
}
