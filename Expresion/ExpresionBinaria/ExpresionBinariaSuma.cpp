#include "Expresion/ExpresionBinaria/ExpresionBinariaSuma.h"

ExpresionBinariaSuma::ExpresionBinariaSuma(Expresion *izquierda, Expresion *derecha, int numeroDeLinea)
    :ExpresionBinaria(izquierda, derecha, SUMA,numeroDeLinea)
{

}

Tipo* ExpresionBinariaSuma::validarSemantica()
{
    Tipo *tipoIzquierda = obtenerExpresionIzquierda()->validarSemantica();
    Tipo *tipoDerecha   = obtenerExpresionDerecha()->validarSemantica();

    /*Entero + Entero */
    if( (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Entero) )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoEntero();
        return Programa::obtenerInstancia()->obtenerTipoEntero();
    }

    /*Flotante + Flotante*/
    if( tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Flotante )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoFlotante();
        return Programa::obtenerInstancia()->obtenerTipoFlotante();
    }

    /*Cadena + Cadena*/
    if( tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Cadena )
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Entero || Entero + Cadena*/
    if( (tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Entero) ||
        (tipoIzquierda->tipo == Entero && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Flotante || Flotante + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Flotante)||
       (tipoIzquierda->tipo == Flotante && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Cadena + Caracter || Caracter + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Caracter)||
       (tipoIzquierda->tipo == Caracter && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*En duda...*/
    /*Cadena + Booleano || Booleano + Cadena*/
    if((tipoIzquierda->tipo == Cadena && tipoDerecha->tipo == Booleano)||
       (tipoIzquierda->tipo == Booleano && tipoDerecha->tipo == Cadena))
    {
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoCadena();
        return Programa::obtenerInstancia()->obtenerTipoCadena();
    }

    /*Arreglos*/
    /*Si el tipoDeDato del arreglo esta en null establecer el que viene
        en la expresion opuesta.
    */
    if( tipoIzquierda->tipo == Arreglo )
    {
        Variable *v = (Variable*)obtenerExpresionIzquierda();
        VariableArreglo *arreglo = obtenerVarArreglo(*v->obtenerIdentificador());
        if( arreglo != 0)
        {
            if( arreglo->tipoDeDato == 0)
            {
                arreglo->tipoDeDato = (tipoDerecha);
            }
            else
            {
                if( arreglo->tipoDeDato != tipoDerecha )
                {
                    /*Quiere agregar al arreglo otro valor, Lanzar error*/
                    stringstream ss;
                    ss << "Arreglo '";
                    ss << *v->obtenerIdentificador();
                    ss << "' esta siendo utilizado para almacenar ";
                    ss << obtenerTipoEnLenguajeNatural(arreglo->tipoDeDato);
                    ss << "\nno puedes utilizarlo para almacenar ";
                    ss << obtenerTipoEnLenguajeNatural(tipoDerecha);
                    throw(ExcepcionLegus(ss.str()));
                }
            }
        }
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoArreglo();
        return this->tipoInferido;
    }

    if( tipoDerecha->tipo == Arreglo )
    {
        Variable *v = (Variable*)obtenerExpresionDerecha();
        VariableArreglo *arreglo = obtenerVarArreglo(*v->obtenerIdentificador());
        if( arreglo != 0)
        {
            if( arreglo->tipoDeDato == 0)
            {
                arreglo->tipoDeDato = (tipoIzquierda);
            }
            else
            {
                if( arreglo->tipoDeDato != tipoIzquierda)
                {
                    /*Quiere agregar al arreglo otro valor, Lanzar error*/
                    stringstream ss;
                    ss << "Arreglo '";
                    ss << *v->obtenerIdentificador();
                    ss << "' esta siendo utilizado para almacenar ";
                    ss << obtenerTipoEnLenguajeNatural(arreglo->tipoDeDato);
                    ss << "\nno puedes utilizarlo para almacenar ";
                    ss << obtenerTipoEnLenguajeNatural(tipoIzquierda);
                    throw(ExcepcionLegus(ss.str()));
                }
            }
        }
        this->tipoInferido = Programa::obtenerInstancia()->obtenerTipoArreglo();
        return this->tipoInferido;
    }

    /*Lanzar Error*/
    throw(ExcepcionLegus("Tipos incompatibles en operacion suma '+' "));
}

string ExpresionBinariaSuma::generarCodigoJava()
{
    if( tipoInferido->tipo == Arreglo )
    {
        /*Ver caso en que ambos sean arreglos o que uno de los 2 es arrego*/
        stringstream codigo;
        Tipo* tipoIzquierda = obtenerExpresionIzquierda()->tipoInferido;
        Tipo* tipoDerecha = obtenerExpresionDerecha()->tipoInferido;

        if( tipoIzquierda->tipo == Arreglo &&
            tipoDerecha->tipo == Arreglo)
        {
            /*Si ambos son arreglos
                Llamar a una funcion built-in que
                concatene ambos arreglos
            */

        }
        else if(tipoIzquierda->tipo != Arreglo &&
                tipoDerecha->tipo == Arreglo)
        {
            /*Izquierda es la que hay que agregar*/
            codigo << ".add(";
            codigo << codigoExpresion(obtenerExpresionIzquierda());
            codigo << ")";
        }
        else if( tipoDerecha->tipo != Arreglo &&
                 tipoIzquierda->tipo == Arreglo)

        {
            /*Revisar lo del boxing on box*/
            /*Derecha es la que hay que agregar*/
            codigo << ".add(";
            codigo << codigoExpresion(obtenerExpresionDerecha());
            codigo << ")";
        }
        return codigo.str();
    }
    else
    {
        string codigoExpresionIzquierda = obtenerExpresionIzquierda()->generarCodigoJava();
        string codigoExpresionDerecha   = obtenerExpresionDerecha()->generarCodigoJava();

        /*Analizar los casos de cadena, caracter */
        return "(" + codigoExpresionIzquierda + " + " + codigoExpresionDerecha + ")";
    }
}

string ExpresionBinariaSuma::codigoExpresion(Expresion *expresion)
{
    stringstream codigo;

    if( expresion->tipoInferido->tipo == Entero )
    {
        codigo << "new Integer(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Flotante)
    {
        codigo << "new Float(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Booleano)
    {
        codigo << "new Boolean(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else if( expresion->tipoInferido->tipo == Caracter)
    {
        codigo << "new Character(";
        codigo << expresion->generarCodigoJava();
        codigo << ")";
    }
    else
    {
        codigo << expresion->generarCodigoJava();
    }

    return codigo.str();
}

VariableArreglo* ExpresionBinariaSuma::obtenerVarArreglo(string id)
{
    vector<VariableDeclarada*> *variables = Programa::obtenerInstancia()->tablaDeVariables;
    VariableDeclarada* ultimaVariable = 0;

    for(unsigned int i = 0 ; i< variables->size(); i++)
    {
        VariableDeclarada* variable = variables->at(i);
        /*mismo identificador y que posea un idDeExpresion menor al mio*/

        if( variable->obtenerVariable()->obtenerIdentificador()->compare( id ) == 0 )
        {
            ultimaVariable = variable;
        }
    }

    if(ultimaVariable != 0)
    {
        if( ultimaVariable->obtenerTipo()!=0)
        {
            if( ultimaVariable->obtenerTipo()->tipo == Arreglo)
            {
                return (VariableArreglo*)ultimaVariable->obtenerVariable();
            }
        }
    }
    return 0;
}

string ExpresionBinariaSuma::obtenerTipoEnLenguajeNatural(Tipo *tipo)
{
    if( tipo == Programa::obtenerInstancia()->obtenerTipoEntero())
    {return " numeros enteros ";}
    if( tipo == Programa::obtenerInstancia()->obtenerTipoCaracter())
    {return " caracteres ";}
    if( tipo == Programa::obtenerInstancia()->obtenerTipoCadena())
    {return " cadenas ";}
    if( tipo == Programa::obtenerInstancia()->obtenerTipoFlotante())
    {return " numeros con decimales ";}
    if( tipo == Programa::obtenerInstancia()->obtenerTipoBooleano())
    {return " valores booleanos ";}
}












