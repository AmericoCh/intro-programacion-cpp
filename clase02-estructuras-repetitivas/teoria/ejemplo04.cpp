// SOlicitar numeros al usuario
// hasta que el usuario decida terminar ingresando 0
// Calcular la suma de todos los numeros ingresados

// NO SE CUANTOS NUMEROS INGRESARA --> ENTONCES DEBO USAR WHILE

#include <iostream>
using namespace std;

int main(){

	int  n, suma;
	
	suma = 0; // variable ACUMULADOR
	cout << "Ingrese un numero: ";
	cin >> n;
	
	// IMPLEMENTACION CON WHILE

    while (n != 0) {
        suma = suma + n;
		cout << "Ingrese un numero: ";
		cin >> n;
    }
	cout << "La suma de los numeros ingresados es: " << suma << endl;
	
	
	
	int suma1;
	suma1 = 0;
	
	// IMPLEMENTACION CON DO - WHILE

    do {
        cout << "Ingrese un numero: ";
		cin >> n;
		if (n != 0) {
			suma1 = suma1 + n;
        }
    } while (n != 0);
	
	cout << "La suma de los numeros ingresados es: " << suma1 << endl;


    // IMPLEMENTACION CON FOR
    int n1;
    int suma2 = 0;

    cout << "Ingrese un numero: ";
	cin >> n1;
	for (; n1 != 0;) {
        suma2 = suma2 + n1;
		cout << "Ingrese un numero: ";
		cin >> n1;
    }
    cout << "La suma de los numeros ingresados es: " << suma2 << endl;



    return 0;
}


