/*
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 2 de octubre de 2019
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto, de acuerdo con el calendario gregoriano.
 *          Incluye varias versiones de la función «esBisiesto». Las que no se utilizan en la función «main» son 
 *          «esBisiesto1» a «esBisiesto4».
 *          3.ª clase de problemas de Programación 1.
 */
#include <iostream>
using namespace std;

/*
 * Pre:  agno > 1582
 * Post: Ha devuelto true si y solo si el año «agno» es bisiesto de acuerdo con las reglas del calendario gregoriano.
 * Nota: Primera versión de la función presentada en la clase de problemas.
 */
bool esBisiesto1(int agno) {
    if (agno % 400 == 0) {
        return true;
    }
    else { // «agno» no es múltiplo de 400
        if (agno % 100 == 0) {
            return false;
        }
        else { // «agno» no es múltiplo de 100
            if (agno % 4 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
    }
}

/*
 * Pre:  agno > 1582
 * Post: Ha devuelto true si y solo si el año «agno» es bisiesto de acuerdo con las reglas del calendario gregoriano.
 * Nota: Segunda versión de la función presentada en la clase de problemas.
 */
bool esBisiesto2(int agno) {
    if (agno % 400 == 0) {
        return true;
    }
    else if (agno % 100 == 0) {
        return false;
    }
    else if (agno % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

/*
 * Pre:  agno > 1582
 * Post: Ha devuelto true si y solo si el año «agno» es bisiesto de acuerdo con las reglas del calendario gregoriano.
 * Nota: Tercera versión de la función presentada en la clase de problemas.
 */
bool esBisiesto3(int agno) {
    if (agno % 400 == 0 || (agno % 4 == 0 && agno % 100 != 0)) {
        return true;
    }
    else {
        return false;
    }
}

/*
 * Pre:  agno > 1582
 * Post: Ha devuelto true si y solo si el año «agno» es bisiesto de acuerdo con las reglas del calendario gregoriano.
 * Nota: Cuarta versión de la función presentada en la clase de problemas.
 */
bool esBisiesto4(int agno) {
    return agno % 400 == 0 || (agno % 4 == 0 && agno % 100 != 0);
}

/*
 * Pre:  agno > 1582
 * Post: Ha devuelto true si y solo si el año «agno» es bisiesto de acuerdo con las reglas del calendario gregoriano.
 * Nota: Quinta y última versión de la función presentada en la clase de problemas.
 */
bool esBisiesto(int agno) {
    bool multiplo4   = (agno %   4 == 0);
    bool multiplo100 = (agno % 100 == 0);
    bool multiplo400 = (agno % 400 == 0);
    return multiplo400 || (multiplo4 && !multiplo100);
}

/*
 * Programa que pide al usuario un año y escribe en la pantalla un  mensaje indicando si es bisiesto o no, de acuerdo
 * con las reglas del calendario gregoriano.
 */
int main() {
    cout << "Escriba un año: " << flush;
    int agno;
    cin >> agno;

    if (esBisiesto(agno)) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }

    return 0;
}
