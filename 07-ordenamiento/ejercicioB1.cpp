/*
Declara un arreglo estático de 5 enteros,
inicialízalo con {9, 3, 7, 1, 5}. 
Ordena el arreglo usando Bubble Sort e imprime el arreglo ordenado.

Ejemplo de salida esperada:
Arreglo ordenado: 1 3 5 7 9
*/


#include <iostream>
using namespace std;

int main(){
    int arr[] = {9,3,7,1,5};  // int ---> 4 bytes
    int n = sizeof(arr)/ sizeof(arr[0]);  // nos da el tamaño del arreglo


    cout << "Arreglo original:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Algortimo burbuja
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j+1]) {  // Ordenamos en forma creciente
                // intercambio
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Arreglo orden creciente:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    

    return 0;
}