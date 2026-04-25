/*
Escribir un algoritmo que pida 3 números enteros diferentes y determine cuál es el mayor
*/
#include <iostream>
using namespace std;
int main() {
    // Datos ------ok
    int num1, num2, num3;  // declaramos 2 variables enteras
    cout << "Ingrese 2 numeros enteros: ";
    cin >> num1 >> num2 >> num3;
    

    // Procesar
    // Salida -----ok
    if(num1 > num2){
        if (num1 > num3) {
            cout << "EL mayor seria " << num1 <<endl;
        } else {
            cout << "El mayor seria " << num3 <<endl;
        }

    } else{ //  num1 < num2
        if (num3 < num2) {
            cout << "El mayor sería: " << num2 <<endl;
        } else {
            cout << "el mayor sería: " << num3 <<endl;
        }    
    }

    return 0;
}