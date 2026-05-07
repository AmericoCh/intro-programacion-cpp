/*
Imprimir un triángulo de altura n tal que:

En cada fila solo se impriman números pares
Cada fila debe reiniciar desde 2
Ejemplo (n=4):

2
2 4
2 4 6
2 4 6 8

1. encabezados OK
2. Partes de un algoritmo
    Datos OK
    Procesamiento:
    For anidados =OK 
*/

#include <iostream>
using namespace std;
int main () {
    // Datos
    int n;
    cout << "Ingrese la altura del triangulo: ";
    cin >> n;

    // Procesamiento
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << 2*j << " ";
        }
        cout << endl;

    }
    /*
    i = 1 --> j = 1
    i = 2 --> j = 1, 2
    i = 3 --> j = 1, 2, 3
    */




    return 0;
}