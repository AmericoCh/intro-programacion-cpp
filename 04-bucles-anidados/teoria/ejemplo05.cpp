/*
7. Triángulo numérico
Implementar un programa que muestre la siguiente salida

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un n para formar un triangulo: ";
    cin >> n;
    for (int i = 1; i <= n; i++) { // recorre filas
        for (int j = 1; j <= i; j++) { // recorre columnas
            cout << j << " ";
        } 
        cout << endl;
    }
    return 0;
}
