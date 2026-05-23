/*
Pide al usuario que ingrese 4 números enteros (uno por uno),
guárdalos en un arreglo estático, ordénalos con Bubble Sort y
muestra el número más pequeño y el más grande.

Ejemplo de salida esperada:

Ingrese 4 números:
15
8
22
10
Mínimo: 8
Máximo: 22
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    int arr[4];
    int n = 4;

    // Procesamiento
    // Pedir datos al usuario y almacenar en arr
    cout << "Ingresa numeros: " <<endl;
    for(int i = 0; i < n; ++i) {
        cout << "Ingrese numero: ";
        cin >> arr[i];
    }


    // Ordenar con bubble sort forma creciente
    for(int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j ++){
            if(arr[j] > arr [j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    
    

    // Mostrar elemento mayor y menor
    cout << "El minimo es: " << arr[0] << endl;
    cout << "El maximo es: " << arr[n-1] << endl;
    

    return 0;
}