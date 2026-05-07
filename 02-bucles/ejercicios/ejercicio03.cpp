/*
Solicitar un número N y calcular la suma desde 1 hasta N.

Ejemplo:
N = 5 → 1 + 2 + 3 + 4 + 5 = 15
*/

#include <iostream>
using namespace std;

int main() {
    int  N;

    cout << "Ingrese un numero: ";
    cin >> N;

    int suma = 0; // NO OLVIDAD INICIALIZAR

    for( int i = 1; i <= N; i++) {
        suma = suma + i;
    }
    cout << "La suma es: " << suma << endl;




    return 0;
}