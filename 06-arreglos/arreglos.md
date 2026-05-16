# Arreglos en C++

## ¿Qué es un arreglo?

Un **arreglo** (array) es una estructura que permite almacenar múltiples datos **del mismo tipo** bajo un solo nombre, accediéndolos mediante un índice numérico.

### El problema que resuelven

Sin arreglos, guardar 5 notas requiere 5 variables separadas:

```cpp
int n1, n2, n3, n4, n5;
```

Con un arreglo, una sola línea hace el trabajo:

```cpp
int notas[5];
```
---

## Modelo: fila de cajas numeradas

Podemos imaginar un arreglo como casillas consecutivas en memoria, cada una con su número de posición:

```
Índice →  [0]   [1]   [2]   [3]   [4]
          ┌───┬─────┬─────┬─────┬─────┐
          |10 │ 20  │ 30  │ 40  │ 50  │
          └───┴─────┴─────┴─────┴─────┘
```

Cada casilla almacena un valor. El índice es la "dirección" de cada casilla.

---

## Declaración

```cpp
tipo nombre[tamaño];
```

```cpp
int    numeros[5];    // 5 enteros
double precios[10];   // 10 decimales
char   letras[26];    // 26 caracteres
```

---

## Los índices empiezan en 0

Este es el error más común al iniciar.

Si declaras `int numeros[5]`, los índices **válidos** son:

```
numeros[0]  
numeros[1]  
numeros[2]  
numeros[3]  
numeros[4]  
numeros[5]  ERROR !  -> fuera del rango (comportamiento indefinido)
```

<span style="color:red">NO existe numeros[5]</span>

> **Regla:** el último índice válido siempre es `tamaño - 1`.

---

## Asignar y leer valores

### Asignación elemento por elemento

```cpp
int numeros[5];

numeros[0] = 10;
numeros[1] = 20;
numeros[2] = 30;
numeros[3] = 40;
numeros[4] = 50;
```

### Inicialización en la declaración

```cpp
// Forma corta equivalente a lo anterior
int numeros[5] = {10, 20, 30, 40, 50};
```

Si inicializas con menos valores que el tamaño, el resto se rellena con `0` (automáticamente):

```cpp
int numeros[5] = {10, 20};
// Resultado: {10, 20, 0, 0, 0}
```

---

## Recorrer arreglos con `for`

Mostrar los 5 elementos uno por uno sería tedioso. Para 100 elementos, sería imposible. Aquí entra el ciclo `for`:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    return 0;
}
```

**Salida:**
```
numeros[0] = 10
numeros[1] = 20
numeros[2] = 30
numeros[3] = 40
numeros[4] = 50
```

### ¿Por qué `i < 5` y no `i <= 5`?

Porque los índices van de `0` a `4`. Si usaras `i <= 5`, accederías a `numeros[5]`, que **no existe**.

---

## Entrada de datos con el usuario

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5; // EL TAMAÑO DEBE SER CONOCIDO EN TIEMPO DE COMPILACIÓN
    int numeros[TAM];

    // Ciclo de entrada
    cout << "Ingresa " << TAM << " numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "  Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Ciclo de salida
    cout << "\nLos numeros ingresados son: ";
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```

> Nota el uso de `const int TAM = 5`. Esto es una **buena práctica**: si necesitas cambiar el tamaño, solo modificas un lugar.

---

## Operaciones clásicas con arreglos

### 1. Suma de todos los elementos

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM];
    int suma = 0;

    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < TAM; i++) {
        suma += numeros[i];    // equivale a: suma = suma + numeros[i]
    }

    cout << "Suma total: " << suma << endl;
    cout << "Promedio:   " << (double)suma / TAM << endl;

    return 0;
}
```

**Traza con {4, 7, 2, 9, 3}:**

| i | numeros[i] | suma |
|---|------------|------|
| 0 | 4          | 4    |
| 1 | 7          | 11   |
| 2 | 2          | 13   |
| 3 | 9          | 22   |
| 4 | 3          | 25   |

---

### 2. Encontrar el mayor

La idea: asumir que el primero es el mayor, luego comparar con el resto.

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM];

    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    int mayor = numeros[0];       // asumimos que el primero es el mayor

    for (int i = 1; i < TAM; i++) {  // empezamos desde el 2do (índice 1)
        if (numeros[i] > mayor) {
            mayor = numeros[i];   // encontramos uno más grande
        }
    }

    cout << "El mayor es: " << mayor << endl;

    return 0;
}
```

**¿Por qué `i = 1` en el segundo ciclo?** Porque ya asignamos `numeros[0]` como el mayor inicial. No tiene sentido compararlo consigo mismo.

---

### 3. Encontrar el mayor Y su posición

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 6;
    int numeros[TAM] = {8, 3, 15, 7, 15, 2};

    int mayor = numeros[0];
    int posicion = 0;

    for (int i = 1; i < TAM; i++) {
        if (numeros[i] > mayor) {
            mayor    = numeros[i];
            posicion = i;
        }
    }

    cout << "Mayor: " << mayor << " (en posicion " << posicion << ")" << endl;

    return 0;
}
```

---

### 4. Contar elementos que cumplen una condición

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 8;
    int numeros[TAM];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    cout << "Ingresa " << TAM << " numeros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < TAM; i++) {
        if (numeros[i] % 2 == 0) pares++;
        else impares++;

        if (numeros[i] > 0) positivos++;
        else if (numeros[i] < 0) negativos++;
    }

    cout << "Pares:     " << pares     << endl;
    cout << "Impares:   " << impares   << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;

    return 0;
}
```

---

### 5. Mostrar el arreglo al revés

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM] = {10, 20, 30, 40, 50};

    cout << "Original: ";
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\nAl reves: ";
    for (int i = TAM - 1; i >= 0; i--) {   // recorremos de atrás hacia adelante
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}
```

---

### 6. Buscar un elemento

```cpp
#include <iostream>
using namespace std;

int main() {
    const int TAM = 6;
    int numeros[TAM] = {5, 12, 7, 12, 3, 12};
    int buscar = 12;
    int veces = 0;
    int primeraPos = -1;  // -1 indica "no encontrado aún"

    for (int i = 0; i < TAM; i++) {
        if (numeros[i] == buscar) {
            veces++;
            if (primeraPos == -1) primeraPos = i;
        }
    }

    if (veces > 0) {
        cout << buscar << " aparece " << veces << " veces." << endl;
        cout << "Primera aparicion en posicion: " << primeraPos << endl;
    } else {
        cout << buscar << " no fue encontrado." << endl;
    }

    return 0;
}
```

---

## Buenas prácticas

```cpp
// Usar constante para el tamaño
const int TAM = 10;
int notas[TAM];

// Nombres descriptivos
int edades[50];    // mejor que: int a[50];

// Inicializar variables acumuladoras antes del ciclo
int suma = 0;
for (int i = 0; i < TAM; i++) {
    suma += notas[i];
}

// Condición del for siempre con < (no <=)
for (int i = 0; i < TAM; i++) { ... }
```

---

## Relación con memoria

Los elementos de un arreglo se almacenan de forma **contigua** en memoria:

```
Dirección:   1000  1004  1008  1012  1016
             ┌────┬─────┬─────┬─────┬─────┐
             │ 10 │ 20  │ 30  │ 40  │ 50  │
             └────┴─────┴─────┴─────┴─────┘
              [0]   [1]   [2]   [3]   [4]
```

(Cada `int` ocupa 4 bytes en arquitecturas modernas)

Esto hace que acceder a cualquier elemento sea **O(1)** — instantáneo.

---

## Resumen

| Concepto | Detalle |
|---|---|
| Declaración | `tipo nombre[tamaño];` |
| Índice inicial | Siempre `0` |
| Índice final | Siempre `tamaño - 1` |
| Recorrido | Ciclo `for` con `i < tamaño` |
| Acceso fuera de rango | Comportamiento indefinido |
| Inicialización rápida | `int a[3] = {1, 2, 3};` |
| Buena práctica | Usar `const int TAM` para el tamaño |

---
