/*
Escribir un algoritmo que pida 2 números enteros y determine cuál es el mayor
*/
#include <iostream>
using namespace std;
int main() {
    // Datos ------ok
    int num1, num2;  // declaramos 2 variables enteras
    cout << "Ingrese 2 numeros enteros: ";
    cin >> num1 >> num2;
    
    // Procesar
    // Salida -----ok
    if(num1 > num2){
        cout << "El mayor seria: " << num1 << endl;
    } else{ //  num1 <= num2
        cout << "El mayor seria: " << num2 << endl;
        
    }

    return 0;
}