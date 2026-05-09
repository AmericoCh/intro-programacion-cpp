/*
Imprimir,para n = 7

*     *
 *   *
  * *
   *
  * *
 *   *
*     *

* B B B B B *  --> i == j    i == 1 j == 7  --> i + j == 8 == n + 1
B * B B B * B  --> i == j    i == 2 j == 6  ---> i + j == 8 == n + 1 
B B * B * B B
B B B * B B B
B B * B * B B
B * B B B * B
* B B B B B *
*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    int n;
    cout << "Ingrese un valor de n para formar la X: ";
    cin >> n;

    // Procesamiento y salida

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if(i == j || i + j == n + 1) {  // RAZONAMIENTO
                cout << "*";
            }else {
                cout << " ";
            }
            
        }
        cout << endl;
    }


    return 0;
}