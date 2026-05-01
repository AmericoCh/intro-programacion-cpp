/*
Escribir un programa que muestre los números del 1 al 10.
*/

#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 10; i=i+2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}