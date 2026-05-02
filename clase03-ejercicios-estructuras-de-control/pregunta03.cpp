#include <iostream>
#include <cmath> // para usar cos(),  abs()
using namespace std;



int main() {

    // Datos
    double x;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    double termino = 1;
    double suma = 0;
    int contador = 0;
    int n = 0;

    // Procesamiento
    do {
        suma = suma + termino;
        n++;
        contador++;
        termino = termino*(-x*x/((2*n-1)*(2*n)));

    } while(abs(termino)> 0.000001);



    // Salida
    cout << "El valor aproximado es: "  << suma << endl;;
    cout << "El valor real es: " << cos(x) << endl; // OK
    cout << "Cantidad de terminos utilizados: " << contador << endl;


    return 0;
}

