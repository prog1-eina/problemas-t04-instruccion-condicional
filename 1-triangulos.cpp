/*
 * Autor: Miguel Ángel Latre
 * Última revisión: 5 de octubre de 2020
 * Resumen: Programa interactivo que, dadas las longitudes de los tres lados de 
 *          un triángulo, escribe en la pantalla si dicho triángulo es 
 *          equilátero, isósceles o escaleno.
 *          3.ª clase de problemas de Programación 1.
 */
#include <iostream>
using namespace std;


/*
 * Programa interactivo que pide al usuario que introduzca
 * las longitudes de los tres lados de un triángulo. A continuación
 * escribe en la pantalla si dicho triángulo es equilátero, isósceles o 
 * escaleno.
 */
int main() {
    cout << "Escriba las longitudes de los lados de un triángulo ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        // Los datos introducidos por el usario son estrictamente positivos.

        cout << "El triángulo es ";
        if (a == b && b == c) {
            // a == b && b == c implica que a == c: los tres lados son iguales.
            cout << "equilátero." << endl;
        }    
        else if (a == b || b == c || a == c) {
            // Dos lados son iguales. Como no se cumple a == b && b == c 
            // (estamos en el «else» de esa condición), el tercer lado es 
            // desigual.
            cout << "isósceles." << endl;
        }
        else {
            // Los tres lados son distintos
            cout << "escaleno." << endl;
        }

        // La función main devuelve 0, indicando al SO que todo ha ido bien.
        return 0;
    }
    else {
        // Los datos introducidos por el usario no son estrictamente positivos.
        cout << "Algún dato no es positivo." << endl;

        // La función main devuelve un valor positivo, 
        // indicando al sistema operativo que ha habido algún error.
        return 1;
    }
}
