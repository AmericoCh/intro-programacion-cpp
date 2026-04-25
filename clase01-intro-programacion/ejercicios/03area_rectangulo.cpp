/*
Implementar un programa que solicite 
los lados de un rectangulo, calcule y muestre su area
*/
#include <iostream>
using namespace std; 
int main () {
    // Datos -----ok
    double base, altura, Area; 
    cout << "Ingrese la base: ";
    cin >> base; 
    cout << "Ingrese la altura: ";
    cin >> altura;
  
    // Procesar ---- ok
    Area = base * altura; 
    
    // Salida -------ok
    cout << "El Area del Rectangulo es: " << Area << endl;

    
    


    
    return 0; 
}

/*
Operares aritmeticos en C++
+  para sumar
- para restar
* para multiplicar
/ para dividir (tener cuidado)
*/