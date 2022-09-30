/*******************************************************************************
 * Autores: Miguel Ángel Latre
 * Última revisión: 30 de septiembre de 2020
 * Resumen: Programa que, dado el número de matriculados en un grupo docente de
 *          una asignatura, escribe en la pantalla el número máximo de
 *          matrículas de honor que pueden otorgarse en dicho grupo.
 *          Problemas de Programación 1 sobre composición condicional (tema 4).
 ******************************************************************************/
#include <iostream>
using namespace std;


/*
 * Valor del número de estudiantes por debajo del cual se otorga al menos una 
 * matrícula de honor
 */
const unsigned UMBRAL_MATRICULADOS_MH = 20;


/*
 * Tasa máxima de matriculas de honor que pueden concederse en relación al 
 * número de estudiantes matriculados
 */
const double TASA_MH = 0.05;


/*
 * Programa que pide al usuario el número de matriculados en una asignatura y
 * escribe el número máximo de matrículas de honor que pueden otorgarse en la
 * Universidad de Zaragoza con ese número de matriculados.
 */
int main() {
    cout << "Escriba el número de matriculados en un grupo docente: ";
    unsigned matriculados;
    cin >> matriculados;

    // Inicialización de «maximo» con el número de matriculas a aplicar en el caso
    // general. La expresión de inicialización es de tipo «double», pero se convierte
    // implícitamente a «unsigned» (truncándolo), porque este último es el tipo de la
    // variable.
    unsigned maximo = matriculados * TASA_MH;

    // Gestión del caso particular cuando hay menos de 20 matriculados.
    if (matriculados < UMBRAL_MATRICULADOS_MH) {
        maximo = 1;
    }

    cout << "Se pueden otorgar como máximo " 
         << maximo << " matrículas de honor." << endl;
}
