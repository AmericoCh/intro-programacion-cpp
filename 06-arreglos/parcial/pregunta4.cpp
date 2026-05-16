/*
Elabore un programa que genere un número aleatorio entre 1 y
100. El usuario debe adivinar ese número. En lugar de decir "es
mayor" o "es menor", el programa debe decirle al usuario si está
"Cerca" o "Lejos".
Para saber si está más cerca o más lejos, se debe calcular la "distancia" (valor absoluto de la
diferencia entre el número ingresado y el número aleatorio).
Ejemplo:
Ingrese un numero: 20
Lejos
Ingrese un numero: 45
Cerca
Ingrese un numero: 51
¡Correcto!
3

rand() generar un aleatorio entre 0 y RAND_MAX (es una contante de la PC)

Experimento 1: lanzar dado y simular su resultado  ---> 1,2,3,4,5,6

*/

#include <iostream>
#include <cstdlib> // rand() srand()
#include <ctime> //time()
#include <cmath> // abs()
using namespace std;

int main(){
    // datos
    // numero aleatorio entre 0 y RAND_MAX
    srand(time(0)); // cambia la semilla con el tiempo de la PC

    cout << rand() <<endl;
    cout<< "RAND_MAX = " << RAND_MAX  << endl;

    // Simular los resultados de lanzar un dado
    // Generando numeros enteros aleatorios en un rango especifico
    cout << "\nlanzando el dado...\n";
    int dado = rand() % 6 + 1;   // D = 6*q + r   con  0<=r   y r <= 5
    cout << "Resultado del dado: " << dado <<endl;

    // datos
    // numero aleatorio entre 1 y 100
    int aleatorio = rand() % 100 + 1;
    cout <<aleatorio <<endl;

    // Procesamiento
    int num_usuario;
    do {
        cout << "Ingrese un numero: ";
        cin >> num_usuario;

        int distancia = abs(num_usuario - aleatorio);

        if(distancia == 0){
            cout << "¡Correcto!" <<endl;;
        } else if (distancia <= 5) {
            cout << "cerca" <<endl;
        } else{
            cout << "lejos" <<endl;
        }

    } while (num_usuario != aleatorio);
    


    return 0;
}