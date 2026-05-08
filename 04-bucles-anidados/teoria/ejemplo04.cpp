/*
6. Triángulo creciente
Implemente un programa que muestre la siguiente salida

*    ---> i = 1  j <= 1
**   ----> i = 2 j <= 2
***
****
***** ----> i = 5  j<=5

Ejercicio Implementar la siguiente variante
 ****   i = 1 ---> 1 espacio y 4 asteriscos  = 
  ***   i = 2 ---> 2 espacios y 3 asteriscos
   **
    *
*/

#include <iostream>
using namespace std;

int main() {
    // Datos
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    // Implemente su solución aquí
    for(int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i ; ++j) { // aqui esta la clave, el numero de asteriscos depende de i
            cout << "*";
        }
        cout << endl;
    }



    
    // Implementacion de la variante
    // Datos
    int m;
    cout << "Ingrese el valor de n: ";
    cin >> m;

    // Implemente su solución aquí
    for(int i = 1; i <= m; ++i) {
        //for (int j = 1; j <= m + 1; ++j) { // aqui esta la clave, el numero de asteriscos depende de i
            //imprimir espacios
            for(int k = 1; k<= i; ++k){
                cout << " ";
            }

            //imprimir asteriscos
            for (int k = 1; k <= m + 1 - i; ++k) {
                cout << "*";
            }  
       // }
        cout << endl;
    }
    return 0;
}

