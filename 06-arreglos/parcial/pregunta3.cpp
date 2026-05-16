/*
Formación hipotética de óxidos
• Realice un programa que simule la formación hipotética de óxidos usando dos elementos: un
metal M y oxígeno O.
• La cantidad de átomos de cada elemento puede variar desde 1 hasta 10.
• Para cada combinación posible, se calculará un nivel de energía hipotético mediante la
fórmula:
energia=( M∗O+ M +2∗O ) mod 50
El programa debe determinar:
a) El menor nivel de energía y los valores de M y O donde ocurre.
b) El mayor nivel de energía y los valores de M y O donde ocurre.
c) Si existe empate, debe mostrar todos los casos. // condicionales
Ejemplo de salida:
2

O = 1,2,3...., 10
M = 1,2,3,....10


2 4 9 1 7 

max = 2
min = 2

*/


#include <iostream>
using namespace std;

int main(){

   
    // Datos
    int M,O,energia;
    int energia_minima, energia_maxima; // Hay que inicializar adecuadamente

    energia_minima = ( 1*1 + 1 +2*1) % 50;
    energia_maxima = ( 1*1 + 1 +2*1) % 50;
    

    // Procesamiento
    for (M = 1; M <= 10; M++){
        for (O = 1; O <= 10; O++){
            energia=( M*O + M +2*O) % 50;
            // La clave del ejericio actualizar los valores de la energia minima y maxima respectivamente
            if (energia < energia_minima) {
                energia_minima = energia;
            }

            if (energia > energia_maxima) {
                energia_maxima = energia;
            }      
        }   
    }

    // calcular los valores donde ocurre la menor energia
    cout << "Menor energía: " <<energia_minima <<endl;
    for (M = 1; M <= 10; M++){
        for (O = 1; O <= 10; O++){
            energia=( M*O + M +2*O) % 50;
            if (energia == energia_minima) {
                cout << "M =" << M << " O = " << O <<endl;
            }
        }
        
    }

    
    // calcular los valores donde ocurre la mayor energia
    cout << "Mayor energía: " << energia_maxima <<endl;
    for (M = 1; M <= 10; M++){
        for (O = 1; O <= 10; O++){
            energia=( M*O + M +2*O) % 50;
            if (energia == energia_maxima) {
                cout << "M =" << M << " O = " << O <<endl;
            }
        }
        
    }

    // Analizando los casos donde empatan
    



    return 0;
}