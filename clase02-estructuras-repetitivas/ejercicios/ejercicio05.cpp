/*
Solicitar una nota entre 0 y 20.
Repetir mientras el valor sea inválido.
*/

#include <iostream>
using namespace std;

int main(){

    int nota;

    // Validando datos
    do {
        cout << "Ingrese la nota (entre 0 y 20): ";
        cin >> nota;

    } while(nota < 0 or nota > 20);

    cout << "Nota ingresada: " << nota <<endl;


    return 0;
}