/*
8. Número mayor
Ingresar 5 números y determinar cuál es el mayor.

*/

#include <iostream>
using namespace std;
int main () {
    int numero;
    int mayor;
    int menor;

    cout << "Ingrese un numero: ";
    cin >> mayor;
    menor = mayor;

    for(int i=1; i<=4; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > mayor) {  // PARA ACTUALIZAR EL VALOR MAXIMO
            mayor = numero;
        }

        if(numero < menor) {  // PARA ACTUALIZAR EL VALOR MINIMO
            menor = numero;
        }

    }
    cout << "El mayor numero es: " << mayor <<endl;
    cout << "El menor numero es: " << menor <<endl;





    return 0;
}