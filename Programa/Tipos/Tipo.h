#ifndef TIPO_H
#define TIPO_H

enum Tipos
{
    Booleano,Cadena,
    Caracter,Entero,
    Flotante,Arreglo,
    Motor, SensorUltrasonico,
    SensorDeTacto, SensorDeLuz,
    SensorDeColor, SensorDeInclinacion,
    SensorDeSonido,SensorGiroscopico,
    SensorDeBrujula
};

class Tipo
{
public:
    Tipo(Tipos tipo);
    Tipos tipo;
};

#endif // TIPO_H
