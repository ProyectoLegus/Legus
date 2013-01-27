#include "Programa/GeneradorDeErrores.h"

GeneradorDeErrores::GeneradorDeErrores()
{
}

string GeneradorDeErrores::obtenerTokenEsperado(int numeroDeToken)
{
    switch(numeroDeToken)
    {
        case 0: return "Se esperaba el simbolo suma '+'";
        case 1: return "Se esperaba el simbolo resta '-'";
        case 2: return "Se esperaba el simbolo multiplicacion '*'";
        case 3: return "Se esperaba el simbolo division '/'";
        case 4: return "Se esperaba el simbolo modulo '%'";
        case 5: return "Se esperaba el simbolo exponenciacion '^'";
        case 6: return "Se esperaba el simbolo mayor '>'";
        case 7: return "Se esperaba el simbolo menor '<'";
        case 8: return "Se esperaba el simbolo mayor igual '>='";
        case 9: return "Se esperaba el simbolo menor igual '<='";
        case 10: return "Se esperaba el simbolo igualdad '==' ";
        case 11: return "Se esperaba el simbolo de negacion '!'";
        case 12: return "";
        case 13: return "";
        case 14: return "Se esperaba Corchete Izquierdo '['";
        case 15: return "Se esperaba Corchete Derecho ']'";
        case 16: return "Se esperaba Parentesis Izquierdo '('";
        case 17: return "Se esperaba Parentesis Derecho ')'";
        case 18: return "Se esperaban Dos Puntos ':'";
        case 19: return "Se esperaba simbolo igual '='";
        case 20: return "Se esperaba simbolo de desigualdad '!='";
        case 21: return "Se esperaba simbolo de coma ','";
        case 22: return "Se esperaba la palabra 'mod'";
        case 23: return "Se esperaba la palabra 'div'";
        case 24: return "Se esperaba la palabra 'igual'";
        case 25: return "Se esperaba la palabra 'a'";
        case 26: return "Se esperaba la palabra 'distinto'";
        case 27: return "Se esperaba la palabra 'de'";
        case 28: return "Se esperaba la palabra 'y'";
        case 29: return "Se esperaba la palabra 'o'";
        case 30: return "Se esperaba la palabra 'no'";
        case 31: return "Se esperaba la palabra 'si'";
        case 32: return "Se esperaba la palabra 'entonces'";
        case 33: return "Se esperaba la palabra 'fin'";
        case 34: return "Se esperaba la palabra 'sino'";
        case 35: return "Se esperaba la palabra 'caso'";
        case 36: return "Se esperaba la palabra 'mientras'";
        case 37: return "Se esperaba la palabra 'haga'";
        case 38: return "Se esperaba la palabra 'ejecute'";
        case 39: return "Se esperaba la palabra 'repetir'";
        case 40: return "Se esperaba la palabra 'infinitas'";
        case 41: return "Se esperaba la palabra 'veces'";
        case 42: return "Se esperaba la palabra 'para'";
        case 43: return "Se esperaba la palabra 'desde'";
        case 44: return "Se esperaba la palabra 'repita'";
        case 45: return "Se esperaba la palabra 'cada'";
        case 46: return "Se esperaba la palabra 'en'";
        case 47: return "Se esperaba la palabra 'funcion'";
        case 48: return "Se esperaba la palabra 'retorna'";
        case 49: return "Se esperaba la palabra 'retornar'";
        case 50: return "Se esperaba la palabra 'utilizar'";
        case 51: return "Se esperaba la palabra 'como'";
        case 52: return "Se esperaba la palabra 'definir'";
        case 53: return "Se esperaba la palabra 'verdadero'";
        case 54: return "Se esperaba la palabra 'falso'";
        case 55: return "Se esperaba la palabra 'hasta'";
    }
    return "";
}
