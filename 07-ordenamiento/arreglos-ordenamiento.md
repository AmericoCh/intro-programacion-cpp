
# Repaso: Arreglos Estáticos + Bubble Sort en C++

## 1. Arreglos Estáticos (Fixed-size arrays)
- **Tamaño fijo en tiempo de compilación:** `int arr[5];`
- **Índices:** Siempre de `0` a `tamaño-1`.
- **Inicialización:**
```cpp
  int nums[3] = {10, 20, 30};   // completa
  int nums[3] = {10, 20};       // resto = 0
  int nums[] = {10, 20, 30};    // tamaño deducido por el compilador
```

## Errores comunes con arreglos

* Index out of bounds:
    ```cpp
    int arr[3]; arr[3] = 5;  //→ error (el último índice es 2)
    ```

* Asumir que se inicializan en cero:
    ```cpp
    int arr[5];  // → contiene basura (valores aleatorios)
    ```

* Usar variable como tamaño (en estático):
    ```cpp
    int n; cin >> n; 
    int arr[n]; // → NO es estático (VLA, no estándar en C++). Usa const int SIZE = 5;
    ```

* Copiar arreglos con =:
    ```cpp
    int a[3] = {1,2,3}; int b[3] = a; // → ERROR hay que copiar elemento por elemento
    ```

## 2. Algoritmo Burbuja (Bubble Sort)

Idea: burbujear el elemento más grande hacia el final, repetidamente.

```cpp
int arr[5] = {5, 1, 4, 2, 8};
int n = 5;

for (int i = 0; i < n - 1; i++) {        // pasadas
    for (int j = 0; j < n - i - 1; j++) { // comparaciones
        if (arr[j] > arr[j + 1]) {
            // intercambiar
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
```

##  Errores comunes en Bubble Sort

* Usar `j < n-1`  en lugar de `j < n-i-1`
→ revisa zonas ya ordenadas innecesariamente (funciona pero es ineficiente)

* Olvidar el `-1` en `n-i-1`
→ accede a `arr[j+1]` fuera de límites en la última pasada

* Intercambio incorrecto:
    ```cpp
    arr[j] = arr[j+1];
    arr[j+1] = arr[j]; // → pierde el valor original
    ```

* Usar
    ```cpp
    arr[j] >= arr[j+1] // → cambia orden a descendente (si no es lo que deseas)
    ```

## 3. Ejercicio rápido para practicar
```cpp
// Ordena este arreglo con bubble sort (escrito a mano)
int edades[6] = {23, 19, 31, 17, 28, 22};
// ¿Cuántas pasadas? ¿Cuántas comparaciones por pasada?
```

## 4. Checklist antes de codificar

* ¿El tamaño del arreglo es constante (`const int` o `número literal`)?

* ¿Los índices están dentro de `0` a `tamaño-1`?

* En bubble sort: ¿el segundo `for` llega hasta `n-i-1`?

* ¿Usaste variable temporal (temp) para intercambiar?

