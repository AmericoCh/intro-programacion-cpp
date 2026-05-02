/*
Implemente un algoritmo que calcule el factorial
de un numero
Ejemplo

ingreso: 5

Salida: El factorial de 5 es: 120
*/

// Encabezado
#include <iostream>
using namespace std;
int main () {

    // Datos
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    /*
    idea:
    n! = 1*2*3*4*..*n
    */

    // Procesamiento
    int factorial = 1;
    for (int i=1; i<=n; i++) {
        factorial = factorial*i;
    }

    // Salida
    cout << "El factorial de "<< n << " es: " << factorial << endl;


    return 0;
}



/*
RESUMEN CURSO
1. manejar variables y operadores aritmeticos y logicos
2. Manejar estructuras de control (if-else, switch, 
   do-while, while, for)
3. Practicar logica de programacion
*/
