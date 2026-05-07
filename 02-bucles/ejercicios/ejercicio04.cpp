/*
4. Tabla de multiplicar
Pedir un número y mostrar su tabla de multiplicar del 1 al 12.

n = 5

1 x 5 = 5
2 x 5 = 10
.
.
.
12 x 5 = 60
*/

#include <iostream>
using namespace std;
int main () {
    
    int N;
    cout << "Ingrese la tabla a mostrar: ";
    cin >> N;
    
    for(int i=1; i<=12; i++){
        cout << i << "x" << N << "=" << i*N << endl;
    }



    return 0;
}