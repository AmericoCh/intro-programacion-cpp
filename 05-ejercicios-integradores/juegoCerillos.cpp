#include <iostream>
# include <cstdlib> // srand() rand()
#include <ctime> // time();
using namespace std;

int main(){
    // Datos
    int cerillos = 23;
    int jugador;  // almacena el numero de cerillos que retira jugador

    srand(time(0)); // para generar diferentes numeros aleatorios en cada ejecucion

    int computadora; // valor aleatorio (1, 2 o 3), representa el numero de cerillos que retirara la compu

    // Procesamiento
    // computadora = rand() % 3 + 1; // genera entero aleatorio entre 1 y 3

    // Usamos do-while

    cout << "Juego de los 23 cerillos\n";
    do {
        cout << endl << "Cerillos restantes: " << cerillos <<endl;
        
        // Jugador
        // Validamos que jugador sea 1 2 o 3
        do {  
            cout << "Retira 1, 2, o 3 cerillos: ";  
            cin >> jugador; 
        } while (jugador < 1 || jugador > 3 || jugador > cerillos); // validar cuando jugador  > cerillos
        
        cerillos-=jugador;

        if(cerillos == 0) {
            cout << "Usted retiró el ultimo cerillo. Perdiste";
            break;
        }


        // Computadora
        computadora = rand() % 3 + 1;
        if (computadora > cerillos) {
            computadora = cerillos;
        }

        cout << "La computadora retira " << computadora << " cerillo(s)" << endl;
        cerillos -= computadora;

        if(cerillos == 0) {
            cout << "La computadora retiró el ultimo cerillo. Ganaste";
            break;
        }

    } while (cerillos > 0);

    

    return 0;
}

