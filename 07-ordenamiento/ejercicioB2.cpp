/*
Crea un arreglo con las calificaciones {85, 92, 78, 90, 88}. 
Ordena de menor a mayor e imprime cada calificación en una línea.

Ejemplo de salida esperada:

Calificaciones ordenadas:
78
85
88
90
92
*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {85, 92, 78, 90, 88};  // int ---> 4 bytes
    int n = sizeof(arr)/ sizeof(arr[0]);  // nos da el tamaño del arreglo


    


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

    cout << "Calificaciones ordenadas:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
    cout << endl;


    

    return 0;
}