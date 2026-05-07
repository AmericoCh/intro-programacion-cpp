/*
10. Descuento en tienda
Leer el monto de compra y aplicar descuento:

≥ 1000 → 20%  --> 0.02
≥ 500 → 10%  ---> 0.1
< 500 → sin descuento
Mostrar el total final.
*/

#include <iostream>
using namespace std;

int main(){

    double monto, resultado, descuento = 0;

    cout << "ingrese el monto de su compra: ";
    cin >> monto;

    if (monto >= 1000) {
        resultado = monto - 0.02*monto; 
        cout << "El monto a pagar es: " << resultado <<endl;
    } else if (monto >= 500) { // monto < 1000
        resultado = monto  - 0.1* monto;
        cout << "El monto a pagar es: " << resultado<< endl;
    } else {  // monto < 500
        resultado = monto;
        cout << "EL monto a pagar, sin descuento es: " << resultado <<endl;
    }

    return 0;
}