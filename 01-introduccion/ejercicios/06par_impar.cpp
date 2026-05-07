#include <iostream>
using namespace std;

int main(){

    // Datos
    int n;
    cout << "ingrese un número entero: ";
    cin >> n;

    // Procesar
    // Mostrar
    // Idea: un numero es par si es multiplo de 2  (es equivalente el residuo de divirlo entre 2 es cero)
    // % calcula el residuo de la division entre 2 enteros
    
    if (n % 2 == 0){
        cout << "El numero es par" <<endl;
    } else {
        cout << "El numero es impar " <<endl;
    }



    return 0;
}

/*
% operdor modulo, calcula el resudio de dividir 2 enteros (también esta en Pseint)

*/