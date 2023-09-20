/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 20-9-2023
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto, de
 *          acuerdo con el calendario gregoriano.
 *          Se incluyen varias versiones del mismo problema.
 *          Esta utiliza una única expresión para determinarlo, aunque es un
 *          tanto oscura.
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 ******************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa que pide al usuario un año y escribe en la pantalla un mensaje 
 * indicando si es bisiesto o no, de acuerdo con las reglas del calendario
 * gregoriano.
 */
int main() {
    cout << "Escriba un año: ";
    unsigned agno;
    cin >> agno;

    if (agno % 400 == 0 || (agno % 4 == 0 && agno % 100 != 0)) {
        cout << "El año " << agno << " es bisiesto." << endl;
    } else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }

    return 0;
}
