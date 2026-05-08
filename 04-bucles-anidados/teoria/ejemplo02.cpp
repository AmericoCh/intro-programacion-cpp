/*

Tabla de multiplicar
Implementar un programa que muestre la siguiente salida

1   2   3   4   5   ----> i = 1
2   4   6   8   10
3   6   9   12  15
4   8   12  16  20
5   10  15  20  25

Observamos 5 filas  ----> for externo

y 5 columnas ------> for interno

*/


#include <iostream>
#include <iomanip> // para usar setw()
using namespace std;

int main() {
    
    // Escriba su solución aqui
    for(int i = 1; i <= 5; ++i) { // for externo recorre filas
        for(int j = 1; j <= 5; ++j) { // for interno recorre columnas
            cout <<setw(3) << i * j;  // multiplicamos
        }
        cout << endl;
    }
    return 0;

}