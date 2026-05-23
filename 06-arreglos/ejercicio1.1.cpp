/*
Leer 7 números enteros y mostrar:
La suma total
El promedio (como decimal)
Salida esperada (con {4, 8, 2, 6, 10, 1, 5}):

Suma: 36
Promedio: 5.14
*/

#include <iostream>
using namespace std;

int main(){
    // Datos      arr[0], arr[1]
    int arr[7]; // = {4,8,2,6,10,1,5};
    int n = 7; // para manejar el tamaño
    int suma = 0;
    double promedio;


    // Procesamiento 
    // Leyendo los 7 numeros
    cout << "ingrese " << n << " numeros:" <<endl;
    for(int i = 0; i < n; ++i) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> arr[i] ;
    }

    // Acumulando suma
    for(int i = 0; i < n; i++) {
        suma = suma + arr[i]; // ACUMULAR SUMA
    }
    
    // Calculamos el promedio
    promedio = 1.0* suma / n; // CALCULAR PROMEDIO CON DECIMALES

    

    // Salida
    cout << "Suma: " << suma <<endl;
    cout << "Promedio: " << promedio <<endl;

    return 0;
}