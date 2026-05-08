#include <iostream>

using namespace std;

/*
¿Cómo se ejecuta bucles anidados?

Joshua == Compilador
i = 1 , j = 1
i = 1 , j = 2
i = 2 , j = 1
i = 2 , j = 2
i = 3 , j = 1
i = 3 , j = 2
*/

int main() { 

    for (int i = 1; i <= 3; i++) { // bucle externo

        for (int j = 1; j <= 2; j++) { // bucle interno

            cout << "i = " << i
                 << " , j = " << j << endl;
        }
    }
    
    /*
    OBS: Por cada iteración del bucle externo, el bucle 
    interno realiza todas las iteraciones
    */

    return 0;
}