/*
el cajero debe "entregar" billetes de $50, $20 y
$10, priorizando siempre dar la menor cantidad de billetes
posibles

monto = 170  = 50 * 3 + 20

billetes50 = 170/50

monto = monto%50;

billetes20 = monto/20

monto = monto%20;
billetes10 = monto/10;



MENOR CANTIDAD DE BILLETES -->
3 billetes de 50
1 billete de 20
0 billetes de 10
*/


#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0;
    int opcion = 0;

    while (opcion != 4) {
         cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Depositar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        if (opcion == 1) {
            cout << "Su saldo es: $" << saldo << endl;
        } 
        else if (opcion == 2) {
            int retiro;
            cout << "Monto a retirar: ";
            cin >> retiro;
            
            if (retiro > saldo) {
                cout << "Saldo insuficiente." << endl;
            } else {
                saldo -= retiro;
                int billetes50 = retiro/50;
                retiro = retiro%50;
                int billetes20 = retiro/20;
                retiro = retiro%20;
                int billetes10 = retiro/10;
                cout << "Retiro exitoso." << endl;
                cout << "Billetes entregados: " << endl;
                cout << billetes50 << " billetes de 50" <<endl;
                cout << billetes20 << " billetes de 20" << endl;
                cout << billetes10 << " blletes de 10" <<endl;
                
            }
        } 
        else if (opcion == 3) {
            double deposito;
            cout << "Monto a depositar: ";
            cin >> deposito;
            saldo += deposito;
            cout << "Deposito exitoso." << endl;
        } 
        else if (opcion == 4) {
            cout << "Gracias por usar el cajero." << endl;
        } 
        else {
            cout << "Opcion invalida." << endl;
        }
    }
    return 0;
}