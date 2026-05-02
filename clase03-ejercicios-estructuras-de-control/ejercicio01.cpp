/*
Ejercicio 1: Número espejo parcial
Dado un número entero positivo, verificar
si la primera mitad de sus dígitos es igual
a la segunda mitad invertida.

Ejemplo:

123      321 → válido    i= 0 i < 2 10 --> 100 --->100
123421 → no válido
122

123321 / 1000 == 123
123321%1000 == 321

*/

#include <iostream>
using namespace std;

int main(){
    // Datos
    int n;
    cout << "Ingrese un numero positivo: ";
    cin >> n;

    // Procesar
    // 1 contar digitos
    int temp = n;
    int digitos = 0;

    while(temp > 0) {   // 123   123/10 --> 12 --> 12/10 -->1
        digitos++;
        temp = temp/10;
    }

    // 2. Analizamos si digitos es par o impar
    if (digitos %2 == 0) {
        // 3. implementar espejo
        int mitad = digitos/2;
        int divisor = 1;
        for (int i = 0; i < mitad; ++i) {
            divisor = divisor*10;
        }
        int izq = n/divisor; //123
        int der = n%divisor; //321

        // 4. Intertir derecha 23 ---> 32  --> 0*10 + 3 == 3*10 + 2 ==32 
        int invertido = 0;
        while(der > 0) {
            invertido = invertido*10 + (der%10);
            der = der/10;
        }

        if ( izq == invertido) {
            cout << "Valido" <<endl;
        } else {
            cout << "invalido" <<endl;
        }

    } else {
        cout << "no válido" <<endl;
    }




    return 0;
}