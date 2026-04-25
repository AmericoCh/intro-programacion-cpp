/*
Escribir un programa que solicite tu edad
y lo imprima en pantalla
*/
#include <iostream>
using namespace std; // cout <<, cin >>

int main () {
    // Datos
    int edad; 
    cout << "Ingrese su edad: "; 
    cin >> edad;
    
    // Procesar
    // Implementado estructura condicional
    if (edad >= 18) {
        cout << "Usted es mayor de edad" << endl;
    } else {
        cout << "Usted es menor de edad" << endl;
    }

    // Salida
    cout << "Su edad es: " << edad << endl; 
     
    return 0; 
}