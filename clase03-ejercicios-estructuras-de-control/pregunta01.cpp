#include <iostream>
using namespace std;

int main() {
    // Datos
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    // Quedo pendiente validar

    int tam = 2*n - 1;

    // Procesamiento

    for(int i = 1; i<=tam; ++i) { // recorre filas
        for (int j =1; j <= tam ; ++j){ // recorre columnas
            if(i == j || i + j == tam + 1) {
                cout << i;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }




    return 0;
}