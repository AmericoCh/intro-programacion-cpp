// Solicitar al usuario un entero positivo
// Debe validar que el numero ingresado dea positivo
// Si el numero no es positivo el programa debe volver a solicitarlo


// Agragar el encabezado
#include <iostream>
using namespace std;

// Escribir la función principal
int main () {
    // Datos
	
    int n;  // Definir n Como Entero;

    do {
        cout << "Ingrese un numero entero: ";
		cin >> n;
    } while (n <= 0);

	// Procesar
	// Salida
   cout << "El numero ingresado es: " << n << endl; 
    return 0;
}



	
	
	
	
	



