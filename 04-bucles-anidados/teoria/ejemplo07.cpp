/*
Ejemplo: tablero de ajedrez
Implemente un programa que imprima el siguiente tablero

B N B N B N B N   --> B (i = 1, j = 1)  N (i = 1, j = 2)  B(i = 1, j = 3)
N B N B N B N B             i + j par       i+j impar       i+j par
B N B N B N B N 
N B N B N B N B 
B N B N B N B N 
N B N B N B N B 
B N B N B N B N 
N B N B N B N B 
*/



#include <iostream>
using namespace std;

int main() {
    // Complete su código aquí

    for(int i = 1; i <= 8; ++i) { // recorre las 8 filas del tablero
        for(int j = 1; j <= 8; ++j) {
            if ((i + j) % 2 ==0 ) { // Ideas??? Aqui esta la clave
                cout << "B" << " ";
            } else {
                cout << "N" << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}

/*
ESTRUCTURAS DE CONTROL

 -- condicionales (if -else, switch)

 -- repetitivas (for, while, do-while)
*/
