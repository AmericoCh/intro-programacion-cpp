/*
Imprimir un calendario:
- Imprimir los 12 meses
- Cada mes tiene diasMes.


para cada mes:
    para cada día:
   
*/

#include <iostream>
#include <iomanip> // para setw()
using namespace std;

int main(){
    int diasMes;
    string mes;
    int anio = 2025;

    bool esBisiesto; // solo puede tomar 2 valores true o false

    if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
        esBisiesto  = true;
    } else {
        esBisiesto = false;
    }
    
    cout << "\nCalendario " << anio << endl;
    for(int i = 1; i <= 12; ++i) { // Recorrer los 12 meses
        switch(i) {
            case 1: diasMes = 31; mes = "Enero"; break;
            case 2: {
                    if (esBisiesto) {
                        diasMes = 29; mes = "Febrero"; break;
                    } else{
                        diasMes = 28; mes = "Febrero"; break;
                    }
            }
            case 3: diasMes = 31; mes = "Marzo"; break;
            case 4: diasMes = 30; mes = "Abril"; break;
            case 5: diasMes = 31; mes = "Mayo"; break;
            case 6: diasMes = 30; mes = "Junio"; break;
            case 7: diasMes = 31; mes = "Julio"; break; // Julio Cesar
            case 8: diasMes = 31; mes = "Agosto"; break; // Augusto
            case 9: diasMes = 30; mes = "Setiembre"; break;
            case 10: diasMes = 31; mes = "Octubre"; break;
            case 11: diasMes = 30; mes = "Noviembre"; break;
            case 12: diasMes = 31; mes = "Dicienbre"; break;
            default: cout << "Error, el mes debe estar entre 1 y 12" <<endl; break;
        }

        cout << mes <<endl;
        cout <<setw(3) <<"L" <<setw(3)<< "M" <<setw(3)<< "M" <<setw(3)<< "J" <<setw(3) << "V"  <<setw(3) << "S"  <<setw(3)<< "D" <<endl;
        for (int j = 1; j <=diasMes; ++j) { // Recorrer los dias de un mes
            cout <<setw(3) << j << " ";
            if(j % 7 == 0) {  // importante
                cout << endl;
            }
            
        }
        cout << endl;

    }

    return 0;
}