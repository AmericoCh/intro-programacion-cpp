/*
Leer una cantidad total de segundos y convertirla a:

horas
minutos
segundos
Ejemplo:

Entrada: 3672
Salida: 1 h 1 min 12 s
*/
#include <iostream>
using namespace std;

int main(){
    // Datos
    int tiempo;
    int horas, minutos, segundos;
    
    cout << "Ingrese la cantidad total de segundos: ";
    cin >> tiempo;

    // Procesamiento
    // Usar / %
    horas = tiempo/3600;
    minutos = (tiempo % 3600) / 60;
    segundos = (tiempo % 3600 % 60);


    // Salida
    cout << "El tiempo en horas, minutos y segundos es: " << endl;
    cout << horas << " h " << minutos << " min " << segundos << " s" <<endl;

    return 0;

    // PAUSA: 9: 25 
}