/******************************************************************************
 * Autor: Miguel Ángel Latre
 * Última revisión: 20-9-2023
 * Resumen: Programa interactivo que, dadas las longitudes de los tres lados de
 *          un triángulo, escribe en la pantalla si dicho triángulo es 
 *          equilátero, isósceles o escaleno.
 *          Versión mejorada del programa anterior, en la que nos preocupamos
 *          de que las longitudes pueden formar realmente un triángulo en la
 *          geometría euclidiana (la longitud del lado mayor es estrictamente
 *          menor que la suma de los otros dos).
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 *****************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

/*
 * Pre:  a > 0, b > 0 y c > 0
 * Post: Devuelve true si y solo si es posible formar un triángulo en la
 *       geometría euclidiana (la longitud del lado mayor es estrictamente
 *       menor que la suma de los otros dos).
 */
bool existeTriangulo(double a, double b, double c) {
    double longLadoMayor = max(a, max(b, c));

    // la suma de los lados menores es igual a la suma de los tres lados menos
    // la longitud del lado mayor:
    double sumaLongMenores = a + b + c - longLadoMayor;

    return longLadoMayor < sumaLongMenores;
}


/*
 * Programa interactivo que pide al usuario que introduzca
 * las longitudes de los tres lados de un triángulo. A continuación, si los
 * tres lados son positivos y permiten formar un triángulo en la geometría
 * euclidiana, escribe en la pantalla si dicho triángulo es equilátero,
 * isósceles o escaleno. En caso contrario, indica que algún lado no es
 * positivo o que no es posible formar un triángulo con esos lados.
 */
int main() {
    cout << "Escriba las longitudes de los lados de un triángulo: ";
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        // Los datos introducidos por el usuario son estrictamente positivos.

        if (existeTriangulo(a, b, c)) {
            cout << "El triángulo es ";
            if (a == b && b == c) {
                // a == b && b == c implica que a == c:
                // los tres lados son iguales.
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

            // La función main devuelve 0, indicando al SO que ha ido bien.
            return 0;
        } else {
            cout << "No se puede formar un triángulo de lados " << a << ", "
                 << b << " y " << c << "." << endl;

            // La función main devuelve un valor positivo, 
            // indicando al sistema operativo que ha habido algún error.
            return 1;
        }
    } else {
        // Algún dato introducido por el usuario no es estrictamente positivo.
        cout << "Algún dato no es positivo." << endl;

        // La función main devuelve un valor positivo, 
        // indicando al sistema operativo que ha habido algún error.
        return 1;
    }
}
