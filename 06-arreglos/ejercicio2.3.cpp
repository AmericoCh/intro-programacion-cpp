/*
Leer un arreglo de 10 números. Luego pedir al usuario un número a buscar y mostrar
cuántas veces aparece en el arreglo y en qué posiciones.

Ejemplo con {3, 7, 3, 5, 3, 1, 9, 3, 2, 6} buscando el 3:

El 3 aparece 4 veces.
Posiciones: 0 2 4 7
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    int contador = 0;
    int clave;
    int numeros[] = {3, 7, 3, 5, 3, 1, 9, 3, 2};

    int n = sizeof(numeros)/sizeof(numeros[0]);

    // Procesamiento
    cout << "Ingrese el numero a buscar: ";
    cin >> clave;

    // Algoritmo de BUSQUEDA LINEAL
    for (int i = 0; i < n; ++i) { // recorremos el arreglo
        if (clave == numeros[i]) { // comparamos si algun elemento coincide con el valor buscado
            contador++;
        }
    }

    // Salida
    cout << "El " << clave << " aparece " << contador << " veces." <<endl;

    cout << "Posiciones: ";
    for (int i = 0; i < n; ++i) {
        if(clave == numeros[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    


    return 0;
}