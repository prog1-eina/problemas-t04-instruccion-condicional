/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30-9-2022
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto, de
 *          acuerdo con el calendario gregoriano.
 *          Se incluyen varias versiones del mismo problema.
 *          Esta es la más simple.
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 ******************************************************************************/
#include <iostream>
using namespace std;


/*
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 * Nota: Primera versión de la función presentada en la clase de problemas.
 */
bool esBisiesto1(unsigned agno) {
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
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 * Nota: Segunda versión de la función presentada en la clase de problemas.
 */
bool esBisiesto2(unsigned agno) {
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
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 * Nota: Tercera versión de la función presentada en la clase de problemas.
 */
bool esBisiesto3(unsigned agno) {
    if (agno % 400 == 0 || (agno % 4 == 0 && agno % 100 != 0)) {
        return true;
    }
    else {
        return false;
    }
}


/*
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 * Nota: Cuarta versión de la función presentada en la clase de problemas.
 */
bool esBisiesto4(unsigned agno) {
    return agno % 400 == 0 || (agno % 4 == 0 && agno % 100 != 0);
}


/*
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 * Nota: Quinta y última versión de la función presentada en la clase de problemas.
 */
bool esBisiesto(unsigned agno) {
    bool multiplo4   = (agno %   4 == 0);
    bool multiplo100 = (agno % 100 == 0);
    bool multiplo400 = (agno % 400 == 0);
    return multiplo400 || (multiplo4 && !multiplo100);
}


/*
 * Programa que pide al usuario un año y escribe en la pantalla un mensaje 
 * indicando si es bisiesto o no, de acuerdo con las reglas del calendario
 * gregoriano.
 */
int main() {
    cout << "Escriba un año: ";
    unsigned agno;
    cin >> agno;

    if (agno % 400 == 0) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else if (agno % 100 == 0) {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }
    else if (agno % 4 == 0) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }
}
