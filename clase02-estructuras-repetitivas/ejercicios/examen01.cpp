#include <iostream>
#include <cmath> // abs(), sqrt(), pow(), sin(), cos()
using namespace std;

/*
t0 = 1

t1 = t0 * -x*x/1*2

t2 = t2* (-x*x/3*4)

t3 = t2 * (-x*x/5*6)


tn = t{n-1}* (-x*x/(2*n-1)*(2n))

*/

int main(){
    // RECORDAR TIPOS BASICOS DE VARIABLES
    // int  --> para enteros
    // double float ---> para numeros con decimales
    // char ---> para caracteres
        
    double x;
    cout << "Ingrese un valor real (en radianes): ";
    cin >> x;

    double termino = 1;
    int contador = 0;
    int n = 0;


    do {

        contador++;
        n++; 

        termino = termino* (-x*x/(2*n-1)*(2*n-2));

    } while(abs(termino) > 0.000001);



    cout << "El valor real es: " << cos(x) <<endl;
    cout << "Se hizo " << contador << " iteraciones " <<endl;

    return 0;
}