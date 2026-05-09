/*
Leer tres números enteros a, b y c.

Realizar un intercambio circular:
a toma el valor de b -------> a = b; <--
b toma el valor de c -------> b = c;
c toma el valor original de a ---> c = 

Mostrar los valores finales.
*/
#include <iostream>
using namespace std;
int main () {
    // Datos
    int a,b,c;
    cout << "Ingrese 3 numeros: " <<endl;
    cout << "Ingrese a: ";
    cin >> a; // a == 1
    cout << "Ingrese b: ";
    cin >> b; // b == 2
    cout << "Ingrese c: ";
    cin >> c;

    

    // Procesamiento
    // uso de variables temporales (auxiliares)
    
    int temp;
    temp = a; // temp guarda el valor original de a
    a = b;   
    b = c; 
    c = temp; // Aquí está la CLAVE
    

    //Salida
    cout << "Valores finales:" <<endl;
    cout << "a = " << a << endl;
    cout << "b = "<< b << endl;
    cout << "c = " << c <<endl;

    return 0;
}
