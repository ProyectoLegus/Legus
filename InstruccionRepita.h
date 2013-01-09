#ifndef INSTRUCCIONREPITA_H
#define INSTRUCCIONREPITA_H

#include "Instruccion.h"

class InstruccionRepita : public Instruccion
{
public:
    InstruccionRepita(Instruccion *siguiente);
};

#endif // INSTRUCCIONREPITA_H
