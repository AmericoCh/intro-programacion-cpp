#include <iostream>
#include <cmath> // para usar cos(),  abs()
using namespace std;

/*
Modificar el codigo para que aproxime 
sin(x) = x - x^3/3! + x^5/5! - .....
*/


int main() {

    // Datos
    double x;  //no
    cout << "Ingrese el valor de x: "; // no
    cin >> x; // no

    double termino = x; // primer termino
    double suma = 0; // variable acumulador
    int contador = 0; // variable contador
    int n = 0; // variable contador

    // Procesamiento
    do {
        suma = suma + termino; // no
        n++; // no
        contador++; // no
        termino = termino*(-x*x/((2*n+1)*(2*n)));

    } while(abs(termino)> 0.000001);



    // Salida
    cout << "El valor aproximado es: "  << suma << endl;
    cout << "El valor real es: " << sin(x) << endl; // OK
    cout << "Cantidad de terminos utilizados: " << contador << endl;



    return 0;
}

/*
Ejercicio
Reescribir el mismo ejercicio
usando while
usando for
*/

