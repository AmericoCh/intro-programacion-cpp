/*
Leer valores reales x, y y z.

Calcular:
E = x^2 + 2y - z/xy + z^2

x = 1
y = 1
z = 1
--> E = 2/2  = 1

Mostrar el resultado con 4 decimales.
*/
#include <iostream>
using namespace std;

int main(){
    // Datos ok
    // Para representar datos reales usar double o float
    double x, y, z;
    cout << "Ingrese 3 valores: ";
    cin >> x >> y >> z;

    // Procesamiento
    // Recordar PRECEDENCIA DE OPERADORES 
    // 1. parentesis
    // 2. potencias
    // 3. multiplicacion y division
    // 4. Sumas y restas
    double E;
    E = (x * x + 2 * y - z) / (x * y + z * z);

    // Salida
    cout <<"El valor de E es: " << E << endl;
    


    return 0;
}