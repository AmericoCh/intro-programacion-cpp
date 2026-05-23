#include <iostream>
using namespace std;

int main(){

    // ERROR 1. Acceso fuera del rango de los indices
    int A[3];
    // A[3] = 10;   ERROR

    // ERROR 2
    int B[10];
    for(int i = 0; i < 10; ++i) {
        cout << B[i] << " "; // ERROR se muestra valores basura
    }
    cout << endl;

    // ERROR 3 VLA (Variable length Array)
    // int n; 
    // cin >> n; 
    // int C[n]; // ERROR, tamaño no puede ser variable

    // FORMAS CORRECTAS:
    int D[20];

    int F[] = {1,2,3};
    int tamF = sizeof(F)/sizeof(F[0]);

    const int SIZE = 30;
    int E[SIZE];

    // ERROR 4. No podemos copiar un arreglo en otro directamente
    int G[3] = {1,2,3};
    //int H[3] = G; // → ERROR hay que copiar elemento por elemento
    int H[3];
    H[0] = G[0];
    H[1] = G[1];
    H[2] = G[2];



    // ALGORITMOS DE ORDENAMIENTO (algortimo burbuja)
    /*
    Promedio ponderado
    RAnking
    1°  17.8
    2°  17.2
    */
   float promediosFC[700];

   //Debo ordenarlos en forma creciente:  j < j+1 -> arr[j] < arr[j+1]

   // Ordena este arreglo con bubble sort (escrito a mano)
   int edades[5] = {5, 1, 4, 2, 8};
   int n = 5;
   // ¿Cuántas pasadas? ¿Cuántas comparaciones por pasada?
   /*
   Pasada 1:
    compara 5 y 1 ---> intercambio 1 5
    compara 5 y 4 ---> intercambio 4 5
    compara 5 y 2 ---> intercambio 2 5
    compara 5 y 8 ---> NO INTERCAMBIO
   

    Resultado 1: {1, 4, 2, 5, 8}
   
   Pasada 2:
    compara 1 y 4 ---> NO INTERCAMBIO
    compara 4 y 2 ---> intercambio 2 4
    compara 4 y 5 ---> NO INTERCAMBIO
    compara 5 y 8 ---> NO INTERCAMBIO

    Resultado 2: {1, 2, 4, 5, 8}

   Pasada 3:
    compara 1 y 2 ---> NO INTERCAMBIO
    compara 2 y 4 ---> NO INTERCAMBIO
    compara 4 y 5 ---> NO INTERCAMBIO
    compara 5 y 8 ---> NO INTERCAMBIO

    Resultado 2: {1, 2, 4, 5, 8}
   
   */

   // Escribiendo mi algoritmo BURBUJA
   // n-1 pasadas

   for(int i = 0; i < n - 1 ; ++i) { // Pasadas
        for(int j = 0; j < n - 1 -i; ++j){ // Comparaciones
            if (edades[j] > edades[j+1]) { // La clase, cuando intercambiar
                // intercambio
                int temp = edades[j];
                edades[j] = edades[j+1];
                edades[j+1] = temp;
            }
        }
   }

   cout << "Arreglo de edades ordenado forma creciente\n";
   for(int i= 0; i < n; ++i){
    cout << edades[i] << " ";
   }
   cout << endl;


    return 0;
}