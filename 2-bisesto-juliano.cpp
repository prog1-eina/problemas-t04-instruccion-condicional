/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 2 de octubre de 2019
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto (de 
 *          acuerdo con el calendario juliano).
 *          3.ª clase de problemas de Programación 1
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que pide al usuario un año y escribe en la pantalla un mensaje 
 * indicando si es bisiesto o no, de acuerdo con las reglas del calendario
 * juliano.
 */
int main() {
    cout << "Escriba un año: ";
    int agno;
    cin >> agno;

    if (agno % 4 == 0) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }
    return 0;
}
