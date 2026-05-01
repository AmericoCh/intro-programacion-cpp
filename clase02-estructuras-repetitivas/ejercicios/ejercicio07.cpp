/*
7. Suma hasta cero
Solicitar números al usuario y sumarlos.
El programa termina cuando el usuario ingresa 0.
*/


#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> n;

    while(n != 0){
        suma = suma + n;
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> n;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}