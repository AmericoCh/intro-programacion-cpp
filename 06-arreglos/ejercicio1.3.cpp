/*
Leer 5 números enteros y mostrar una tabla con su valor
original y su doble.
Salida esperada:

Numero   Doble
------   -----
   4       8
   9      18
   2       4
   7      14
   1       2
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Datos
    int numero[5]; // numero[0], numero[1], ....numero[i]
    int n = 5;


    // Procesamiento
    cout << "Ingrese los numeros: " << endl;

    // Leer 5 numeros:
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el numero: ";
        cin >> numero[i];
    }

    // Salida
    // Motrando trabla
    cout << setw (3) << "Numero" << " " << "Doble" << endl;
    cout << setw (3) << "----- " << " " << "-----" <<endl; 
    for (int i = 0; i < n; ++i) {
        cout << setw (3) << numero[i] << "\t" << 2 * numero[i] << endl;
    }

    cout << "Probando" << "         " << "Un espacio en blanco" << endl;
    cout << "probando" << "\t" << "Tab" <<endl;

    return 0;
}