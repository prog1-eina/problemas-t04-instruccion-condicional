/*
 * Autores: Miguel Ángel Latre
 * Última revisión: 2 de octubre de 2019
 * Resumen: Función que, dado el número de matriculados en una asignatura y en un mismo grupo docente, devuelve el
 *          número máximo de matrículas de honor que pueden otorgarse.
 *          3.ª clase de problemas de Programación 1
 */
#include <iostream>
using namespace std;

// Valor del número de estudiantes por debajo del cual se otorga al menos una matrícula de honor.
const int UMBRAL_MATRICULADOS_MH = 20;

// Tasa máxima de matriculas de honor que pueden concederse en relación al número de estudiantes matriculados
const double TASA_MH = 0.05;

/*
 * Pre:  matriculados > 0
 * Post: Ha devuelto el número máximo de matriculas de honor que pueden otorgarse en un grupo de una asignatura que
 *       tiene «matriculados» estudiantes matriculados.
 */
int maximoMatriculasHonor(int matriculados) {
    if (matriculados < UMBRAL_MATRICULADOS_MH) {
        return 1;
    }
    else {
        return int(matriculados * TASA_MH);
    }
}

/*
 * Esta función main se limita a hacer pruebas de la función «maximoMatriculasHonor», invocándola con los valores
 * límite del número de matriculados en los que podría producirse un cambio en el número máximo de matrículas de honor  
 * que pueden otorgarse.
 * Debe escribir en la pantalla los valores 1, 1, 1, 1, 1, 2 y 2, a razón de un número por línea.
 */
int main() {
    cout << maximoMatriculasHonor( 1) << endl;
    cout << maximoMatriculasHonor(19) << endl;
    cout << maximoMatriculasHonor(20) << endl;
    cout << maximoMatriculasHonor(21) << endl;
    cout << maximoMatriculasHonor(39) << endl;
    cout << maximoMatriculasHonor(40) << endl;
    cout << maximoMatriculasHonor(41) << endl;
}
