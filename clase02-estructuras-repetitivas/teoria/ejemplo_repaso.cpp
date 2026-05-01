/*
Escribir un programa que pida 3 numeros
al usuario y muestre cuántos de ellos son 
positivos
*/
#include <iostream>
using namespace std;

int main() {
    // Datos
    double a, b , c; // Declamos 3 variables
    int contador = 0; // variable para contar positivos
    cout << "Ingrese 3 numeros: "; // solicitamos al usuario que ingrese 3 numeros
    cin >> a >> b >> c;

    // Procesamiento
    if (a > 0) {
        contador++; // contador = contador + 1;
    }

    if (b > 0) {
        contador++;
    }

    if (c > 0) {
        contador++;
    }

    // Salida

    cout << "La cantidad de positivos es: " << contador <<endl;


    return 0;
}