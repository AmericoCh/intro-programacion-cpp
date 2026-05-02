/*
Contar cuántos números primos hay en el rango [A, B],
pero solo aquellos cuya suma de dígitos también sea primo.
*/


#include <iostream>
using namespace std;

int main(){
    // Datos
    int A,B;
    int contador = 0;
    cout << "Poner 2 numeros enteros: A < B ";
    cin >> A >> B; //EN  C++ NO SE USA , PARA INGRESO DE DATOS
    
    // Procesamiento

    for (int i = A; i <= B; ++i) { // analizamos el rango [A, B]
        
        // Determinamos si el numero i es primo
        bool esPrimo = true;
        for(int j = 2; j*j <= i; j++) {
            if( i % j == 0) {
                esPrimo = false;
            }
        }

        // Vericamos que la suma de digitos dea tambien primo
        if(esPrimo) {
            int suma = 0;
            int temp = i;
            while(temp > 0) {
                suma = suma + temp%10;
                temp = temp/10;
            }

            bool sumaesPrimo = true;  // verificamos si suma es tambien primo
            for(int j = 2; j*j <= suma; j++) {
                if( suma % j == 0) {
                    sumaesPrimo= false;
                }
            }

            if (sumaesPrimo) {
                cout << "Numero primo con suma primo: " << i << endl;
                contador++;
            }

        }

    }


    // Salida
    cout << "Hay " << contador << " primos cuya suma de digitos es tambien primo" << endl;

    return 0;
}