/*
6. Promedio de notas
Pedir 5 notas y calcular el promedio.
*/

#include <iostream>
using namespace std;
int main () {
    int nota;
    int suma=0;
    
    for (int i=1; i<=5; i++){
        cout << "Ingrese nota: ";
        cin >> nota;

        // Ahora voy acumular la suma 
        suma = suma + nota;
    }

    cout << "La suma es: " << suma <<endl;
    cout << "El promedio es: " << 1.0*suma/5 << endl; // NO OLVIDAR  a/b da el cociente si a y b son enteros

    
    // 5/2 == 2
   


    return 0;
}