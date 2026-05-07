/*
Escribir un programa que solicite un numero entero
y lo clasifique como positivo, negativo  o cero
*/
#include <iostream>
using namespace std;
int main () {
    //Datos ----- ok
    int numero; 
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Procesar
    // Salida
    // Ejemplo estructuras condicionales ANIDADAS
    if (numero > 0) {
        cout << "El numero es positivo" << endl;
    } else if (numero < 0) {  // numero <= 0
        cout << "El numero es negativo" << endl; 
    } else { // numero == 0
        cout << "El numero es cero" <<endl;
    }


    return 0; 
}