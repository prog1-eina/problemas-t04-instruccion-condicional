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
 * Programa interactivo que pide al usuario que introduzca, ordenadas de menor
 * a mayor, las longitudes de los tres lados de un triángulo. A continuación
 * escribe en la pantalla si dicho triángulo es equilátero, isósceles o 
 * escaleno.
 */
int main() {
    cout << "Escriba las longitudes de los lados de un triángulo "
         << "(ordenadas de menor a mayor): ";
    double a, b, c;
    cin >> a >> b >> c;

    if (0 < a && a <= b && b <= c) {
        cout << "El triángulo es ";
        if (a == b && b == c) {
            cout << "equilátero." << endl;
        }    
        else if (a == b || b == c) {
            cout << "isósceles." << endl;
        }
        else {
            cout << "escaleno." << endl;
        }
        return 0;
    }
    else {
        cout << "Los datos no están ordenados o alguno es menor que cero."
             << endl;
        return 1;
    }
}
