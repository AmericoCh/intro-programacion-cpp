/*
Implemente un algoritmo que 
muestre la tabla desde el 5 hasta el 12

Ejemplo de salida:
Tabla del 5
1 x 5 = 5
2 x 5 =10
.
.
.
12 x 5 = 60

Tabla del 6
1 x 6 = 6
2 x 6 =12
.
.
.
12 x 6 = 72
...
Tabla del 12
1 x 12 = 12
2 x 12 =24
.
.
.
12 x 12 = 144
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    //int n = 5; // 6, 7, 8, 9, 10, 11, 12

    for(int n = 5; n <= 12; n++) { // Tabla desde 5 hasta 12
        cout << "\nTabla del " << n <<endl;
        // Procesamiento:  i * n, para cada i=1...12
        for(int i = 1; i <=12; ++i) {
            //Salida : Tabla del 5 
            cout << i << " x " << n << " = " << i * n <<endl;
        }
    }
    
    return 0;
}