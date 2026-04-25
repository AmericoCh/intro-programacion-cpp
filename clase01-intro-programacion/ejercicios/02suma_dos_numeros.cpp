/*
Leer dos números y mostrar su suma.
*/

#include <iostream>
using namespace std;


int main() {
    // Datos
    double num1, num2, suma;
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "ingrese el segundo numero: ";
    cin >> num2;

    // Procesar
    suma = num1 + num2; // <----

    // Salida

    cout  << "La suma es: " << suma << endl;

    return 0;
}