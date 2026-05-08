/*
Autor: Joshua Calampa
Fecha: 7/05/2026

Ejemplo : Rectángulo de asteriscos
Implemente un programa que muestre la siguiente salida

******
******
******
******

Ejercicio: Imprimir la siguiente variante
******
*    * 
*    *  
******
*/
#include <iostream>
using namespace std;

int main() {
    // Datos
    int n;
    cout << "Ingrese un n para formar un rectangulo: ";
    cin >> n;


    // Procesamiento // salida
    for (int i = 1; i <= n; i++) { // recorre las n filas
        for (int j = 1; j <= n + 2; j++){ // recorre las  columnas
            if (i==1 || i == n || j == 1) {
                cout << "*";
            } else { // analizamos como imprimir la ultima columna de asteriscos
                if (j != n + 2) {
                    cout << " "; // Aquí esta la clave !
                } else {
                    cout << "*";
                }
                
            }
             
        }
        cout << endl;
    }
    

    return 0;
}


/*
Ingrese un n para formar un rectangulo: 4
******
*    *  ---> i=2, j =6
*    *  ----> i= 3 j =6
******

*/
