/*
Leer 8 números (pueden ser negativos, cero o positivos).
Mostrar únicamente los que son positivos, en el orden en que fueron ingresados.

Ejemplo con {3, -1, 0, 7, -4, 2, -8, 5}:

Positivos: 3 7 2 5
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    double numeros[8];
    int n = 8;

    // Procesamiento
    // Leer los numeros
    cout << "Ingrese los numeros" <<endl;
    
    for(int i = 0; i < n; ++i) {
        cout << "Ingresa el numero " << i+1 <<": ";
        cin >> numeros[i];
    }

    // MOstrar solo positivos
    for(int i = 0; i < n; ++i) {
        if (numeros[i] > 0) {
            cout << numeros[i] << " ";
        }
        
    }
    cout << endl;

    // i=0 <------ i-- --------- i=n-1
    // Muestre los negativos pero en orden inverso al que fueron ingresados
    for (int i = n - 1; i >= 0; i--) {  // AQUI ESTA LA CLAVE, cmabiar para recorrer el arreglo desde el final hacia el inicio
        if (numeros[i] < 0) {
            cout << numeros[i] << " ";
        } 
    }
    cout << endl;





    // Salida

    return 0;
}
