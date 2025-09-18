/******************************************************************************
 * Autor: Miguel Ángel Latre
 * Última revisión: 20-9-2023
 * Resumen: Programa interactivo que, dadas las longitudes de los tres lados de 
 *          un triángulo, escribe en la pantalla si dicho triángulo es 
 *          equilátero, isósceles o escaleno.
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 *****************************************************************************/
#include <iostream>
using namespace std;


/*
 * Programa interactivo que pide al usuario que introduzca las longitudes de
 * los tres lados de un triángulo. A continuación, si los tres lados son
 * positivos, escribe en la pantalla si dicho triángulo es equilátero,
 * isósceles o escaleno, sin preocuparse de si las longitudes pueden formar
 * realmente un triángulo en la geometría euclidiana. En caso contrario, indica
 * que algún lado no es positivo.
 */
int main() {
    cout << "Escriba las longitudes de los lados de un triángulo: ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        // Los datos introducidos por el usuario son estrictamente positivos.

        cout << "El triángulo es ";
        if (a == b && b == c) {
            // a == b && b == c implica que a == c: los tres lados son iguales.
            cout << "equilátero." << endl;
        } else if (a == b || b == c || a == c) {
            // Dos lados son iguales. Como no se cumple a == b && b == c 
            // (estamos en el «else» de esa condición), el tercer lado es 
            // desigual.
            cout << "isósceles." << endl;
        } else {
            // Los tres lados son distintos
            cout << "escaleno." << endl;
        }
    } else {
        // Algún dato introducido por el usuario no es estrictamente positivo.
        cout << "Algún dato no es positivo." << endl;
    }
}
