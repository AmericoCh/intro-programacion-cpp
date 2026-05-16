/*
n = 7;
m = n/2 = 7/2 =  3

*** ***   ---> i = 1   j = 3  m = 3       i = 1  j = 5    m = 3
**   **   ---> i = 2   j = 2  m = 3       i = 2  j = 6    m = 3
*     *   ---> i = 3   j = 1  m = 3       i = 3  j = 7    m = 3

*     *   ---> i = 1   j = 1              i = 1 j = 7    n = 7
**   **   ---> i = 2   j = 2              i = 2 j = 6    n = 7
*** ***
*/

#include <iostream>
using namespace std;

int main () {
 int n;
 cout << "Ingrese un n para formar el as de oros: ";
 cin >> n;

 int m = n/2; // voy a recorrer solo la mitad de las filas

// PARTE SUPERIOR
for (int i = 1; i <= m + 1; i++) {  // recorre la mitad de las filas
    for (int j = 1; j <= n; j++) {  // recorre columnas
        if (i +j <= m + 1 || j - i >= m + 1) {   // aquí está la clave del problema 
            cout << "*";
        } else {
            cout << " ";
        }
       
    }
    cout << endl;
}

// cout << endl;

// PARTE INFERIOR
 for (int i = 1; i <= m; i++) {  // recorre la mitad inferior de las filas
    for (int j = 1; j <= n; j++) {  // recorre columnas
        if (i>=j || i + j >= n + 1) {   // aquí está la clave del problema
            cout << "*";
        } else {
            cout << " ";
        }
       
    }
    cout << endl;
}



    return 0;
}