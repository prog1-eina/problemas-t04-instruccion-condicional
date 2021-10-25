/*******************************************************************************
 * Autores: Javier Martínez, Miguel Ángel Latre, Simona Bernardi
 * Última revisión: 30 de septiembre de 2020
 * Resumen: Programa interactivo que informa de si un año es o no bisiesto.
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Año en el que se produjo el cambio del calendario juliano al gregoriano
 * en España, Italia, Portugal y la zona católica de Polonia.
 */
const unsigned AGNO_CAMBIO_CALENDARIO = 1582;

/*
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario gregoriano.
 * El valor del parámetro «agno» debe ser posterior a 1582.
 */
bool esBisiestoGregoriano(unsigned agno) {
    return (agno % 400 == 0) || (agno % 4 == 0 && agno % 100 != 0);
}


/*
 * Devuelve true si y solo si el año «agno» es bisiesto de acuerdo con las
 * reglas del calendario juliano.
 * El valor del parámetro «agno» debe ser no posterior a 1582.
 */
bool esBisiestoJuliano(unsigned agno) {
    return  (agno % 4 == 0);
}


/*
 * Devuelve true si y solo si el año «agno» es o fue bisiesto en España, Italia,
 * Portugal.
 */
bool esBisiesto(unsigned agno) {
    if (agno <= AGNO_CAMBIO_CALENDARIO) {
        return esBisiestoJuliano(agno);
    }
    else {
        return esBisiestoGregoriano(agno);
    }
}

/*
 * Programa que pide al usuario un año y escribe en la pantalla un mensaje 
 * indicando si es bisiesto o no.
 */
int main() {
    cout << "Escriba un año: ";
    unsigned agno;
    cin >> agno;

    if (esBisiesto(agno)) {
        cout << "El año " << agno << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << agno << " no es bisiesto." << endl;
    }

    return 0;
}
