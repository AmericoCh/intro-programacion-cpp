/*
Ejemplo:
Utilizando while implementar un programa que imprima el siguiente patrón

1 2 3 4 
1 2 3 4 
1 2 3 4 
*/


#include <iostream>
using namespace std;

int main() {
    int n = 3;
    // Implemente su código aquí
    int i = 1;

    while(i <= n) { // recorre filas
        int j = 1;
        while(j<= n + 1) { // recorre las columnas
            cout << j << " ";
             ++j;
        }
        cout << endl;
        ++i;

    }
    return 0;
}
/*
for (int i = 0; i < n; ++i) {
    // código aquí
}

int i = 0;
while (i < n) {
    // código aquí

    ++i
}

*/