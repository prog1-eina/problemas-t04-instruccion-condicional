/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 30-9-2022
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto, de
 *          acuerdo con el calendario gregoriano.
 *          Se incluyen varias versiones del mismo problema.
 *          Esta sea posiblemente la más legible.
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

    bool multiplo4   = (agno %   4 == 0);
    bool multiplo100 = (agno % 100 == 0);
    bool multiplo400 = (agno % 400 == 0);

    if (multiplo400 || (multiplo4 && !multiplo100)) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }

    return 0;
}
