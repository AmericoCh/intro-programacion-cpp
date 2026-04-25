#include <iostream>
using namespace std;


int main() {
    // Datos
    int edad;
    cout << "ingrese su edad: ";
    cin >> edad;

    // Procesando
    // Salida
    if (edad >= 18) {
        cout << "Usted es mayor de edad" <<endl;
    } else {
        cout << "Usted es menor de edad" <<endl;
    }

    return 0;
}