/*
Leer notas hasta ingresar -1.

Calcular:

promedio
mayor nota
menor nota
cantidad de aprobados (nota >= 10)
cantidad de desaprobados 
*/
#include <iostream>
using  namespace std;
int main () {
    // Datos
    int notas; //  ámbito de alcande de una variable
    int suma = 0;  // suma/cantidadNotas
    double promedio;
    int maxNotas = 0, minNotas = 20;  // No olvidar inicializar variables
    int aprobados = 0, desaprobados = 0;
    int cantidadNotas = 0;

    do { 
        cout << "Ingrese notas (-1 para termininar): ";
        cin >> notas;

        if (notas >= 0) {  // para procesar solo las notas != -1
            
            // Contando aprobados y desabrobados
            if (notas >=10) {
                aprobados++;
            } else {
                desaprobados++;
            }

            // Actulizando  maxNotas y minNotas 
            if (notas > maxNotas) {
                maxNotas = notas;
            }

            if (notas < minNotas) {
                minNotas = notas;
            }

            // acumulamos la suma y la cantidad de notas para calcular el promedio despues
            cantidadNotas++;
            suma = suma + notas; // acumula la suma de las notas

        }

        
    }
    while(notas != -1);

    // Procesar
    promedio = 1.0*suma/cantidadNotas; // suma es int cantidadNotas es int ---> promedio será el cociente entero (INCORRECTO)


    //Salida 
    cout << "El promedio es: " << promedio <<endl;
    cout << "Nota maxima: " << maxNotas <<endl;
    cout << "Nota minima: " << minNotas <<endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de desaprobados: " << desaprobados <<endl;
    
    return 0;
}