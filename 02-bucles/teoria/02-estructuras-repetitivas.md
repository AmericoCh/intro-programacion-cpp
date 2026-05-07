# Clase 2: Estructuras Repetitivas (Ciclos)

## 1. ¿Qué es un ciclo?

Un ciclo es una estructura que permite repetir un bloque de instrucciones varias veces, sin necesidad de escribirlas manualmente.

Se usa cuando:

* No sabemos exactamente cuántas veces repetir
* Necesitamos validar datos
* Queremos procesar múltiples valores

## 2. Tipos de ciclos

Existen tres tipos principales:

| Ciclo     | ¿Cuándo usarlo?                              |
|-----------|---------------------------------------------|
| while     | Cuando no sabemos cuántas veces repetir     |
| do-while  | Cuando queremos que se ejecute al menos una vez |
| for       | Cuando sabemos cuántas veces repetir        |


## 3. Ciclo do-while

Se ejecuta al menos una vez, luego evalúa la condición.


```pseint
Definir numero Como Entero

Repetir
    Escribir "Ingrese un numero positivo:"
    Leer numero
Hasta Que numero > 0
```
**equivalente en C++**

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingrese un numero positivo: ";
        cin >> numero;
    } while (numero <= 0);

    return 0;
}
```

Se usa para:

* Validación de datos
* Menús interactivos

## 4. Ciclo while

Se ejecuta mientras la condición sea verdadera

```pseint
Definir contador Como Entero

contador <- 1

Mientras contador <= 5 Hacer
    Escribir contador
    contador <- contador + 1
FinMientras
```

**equivalente en C++**
```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 1;

    while (contador <= 5) {
        cout << contador << endl;
        contador = contador + 1;
    }

    return 0;
}
```
**Error común**

Si no actualizas la variable (contador++), el ciclo se vuelve infinito.


## 5. Ciclo for

Se usa cuando conocemos el número de repeticiones.


```pseint
Definir i Como Entero

Para i <- 1 Hasta 5 Hacer
    Escribir i
FinPara
```
**equivalente en C++**
```cpp
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    return 0;
}
```

**Estructura del for**

`for (inicialización; condición; actualización)`


## 6. Comparación de ciclos

| Característica            | while | do-while | for          |
|--------------------------|-------|----------|--------------|
| Evalúa al inicio         | OK    | NO      | OK           |
| Ejecuta al menos 1 vez   | NO    | OK      | NO           |
| Control con contador     | OK    | OK      | OK (ideal)   |

---

## 7. Ejemplo aplicado: suma de números

```pseint
Definir suma, numero Como Entero

suma <- 0

Mientras numero <> 0 Hacer
    Escribir "Ingrese un numero (0 para terminar):"
    Leer numero
    suma <- suma + numero
FinMientras

Escribir "La suma es: ", suma
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int suma = 0, numero;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
```

## 8. Ejemplo aplicado: menú simple

```pseint
Definir opcion Como Entero

Repetir
    Escribir "1. Sumar"
    Escribir "2. Restar"
    Escribir "0. Salir"
    Leer opcion
Hasta Que opcion = 0
```



```cpp
#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

    } while (opcion != 0);

    return 0;
}
```
