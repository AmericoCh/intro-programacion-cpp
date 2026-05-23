# Ejercicios: Arreglos Estáticos + Bubble Sort en C++

## Ejercicio B1
Declara un arreglo estático de 5 enteros, inicialízalo con `{9, 3, 7, 1, 5}`. Ordena el arreglo usando Bubble Sort e imprime el arreglo ordenado.

**Ejemplo de salida esperada:**
```text
Arreglo ordenado: 1 3 5 7 9
```
---

## Ejercicio B2
Crea un arreglo con las calificaciones `{85, 92, 78, 90, 88}`. Ordena de **menor a mayor** e imprime cada calificación en una línea.

**Ejemplo de salida esperada:**
```text
Calificaciones ordenadas:
78
85
88
90
92
```
---
## Ejercicio B3
Pide al usuario que ingrese 4 números enteros (uno por uno), guárdalos en un arreglo estático, ordénalos con Bubble Sort y muestra el número **más pequeño** y el **más grande**.

**Ejemplo de salida esperada:**
```text
Ingrese 4 números:
15
8
22
10
Mínimo: 8
Máximo: 22
```
---

## Ejercicio I1
Declara un arreglo `int numeros[8] = {42, 15, 7, 23, 11, 56, 19, 33}`. Ordena de **mayor a menor** (modifica la condición del Bubble Sort) y muestra el resultado.

**Ejemplo de salida esperada:**
```text
Orden descendente: 56 42 33 23 19 15 11 7
```
---

## Ejercicio I2
Escribe un programa que:
1. Llene un arreglo estático de tamaño 6 con números ingresados por el usuario
2. Ordene el arreglo con Bubble Sort
3. Pregunte al usuario un número a buscar
4. Use **búsqueda lineal** para decir si el número está en el arreglo ordenado

**Ejemplo de salida esperada:**
```text
Ingrese 6 números:
10
25
7
30
15
20
Arreglo ordenado: 7 10 15 20 25 30
¿Qué número busca? 15
15 SÍ está en el arreglo

¿Qué número busca? 99
99 NO está en el arreglo
```
---

## Ejercicio I3 (burbuja modificado)
Modifica el Bubble Sort para que **cuente** cuántas comparaciones y cuántos intercambios realiza. Muestra ambos conteos al final. 

**Datos iniciales:** `int datos[5] = {4, 2, 5, 1, 3}`

**Ejemplo de salida esperada:**
```text
Proceso de ordenamiento...
Arreglo ordenado: 1 2 3 4 5
Comparaciones totales: 10
Intercambios totales: 5
```
---

## Ejercicio A1 (Orden mixto)
Dado el arreglo `int mezclado[10] = {5, -2, 8, -7, 3, 0, -4, 6, -1, 2}`, ordénalo de la siguiente manera:
- Primero todos los **números negativos** (ordenados de menor a mayor)
- Luego todos los **no negativos** (ordenados de menor a mayor)

**NO uses arreglos auxiliares, modifica el mismo arreglo con una sola ejecución de Bubble Sort adaptado.**

**Ejemplo de salida esperada:**
```text
Arreglo original: 5 -2 8 -7 3 0 -4 6 -1 2
Arreglo ordenado mixto: -7 -4 -2 -1 0 2 3 5 6 8
```
---

## Ejercicio A2 (Detección de orden)
Crea un programa que:
1. Permita al usuario ingresar un arreglo de 7 números
2. **Antes de ordenar**, determine si el arreglo ya está ordenado (ascendente, descendente o desordenado)
3. Si está desordenado, aplique Bubble Sort y muestre cuántas pasadas completas necesitó (sin optimizar)
4. Si ya está ordenado, no haga nada y muestre un mensaje

**Ejemplo de salida esperada (caso desordenado):**
```text
Ingrese 7 números:
12 5 8 3 10 1 6
Estado original: Desordenado
Aplicando ordenamiento...
Pasadas necesarias: 6
Arreglo ordenado: 1 3 5 6 8 10 12
```

**Ejemplo de salida esperada (caso ya ordenado ascendente):**
```text
Ingrese 7 números:
1 3 5 7 9 11 13
Estado original: Ya está ordenado ascendentemente
No se requiere ordenamiento
```
---

## Ejercicio A3 (Burbuja bidireccional - Cocktail Shaker Sort)
Implementa una variante del Bubble Sort llamada **Cocktail Shaker Sort** que ordena en ambas direcciones:
1. De izquierda a derecha (burbujea el más grande al final)
2. De derecha a izquierda (burbujea el más pequeño al inicio)
3. Repite hasta ordenar completamente

**Datos de prueba:** `int arr[8] = {64, 34, 25, 12, 22, 11, 90, 5}`

**Ejemplo de salida esperada:**
```text
Original: 64 34 25 12 22 11 90 5
Pasada 1 ida: 34 25 12 22 11 64 5 90
Pasada 1 vuelta: 5 34 25 12 22 11 64 90
Pasada 2 ida: 5 25 12 22 11 34 64 90
Pasada 2 vuelta: 5 11 25 12 22 34 64 90
Pasada 3 ida: 5 11 12 22 25 34 64 90
Pasada 3 vuelta: 5 11 12 22 25 34 64 90
Final: 5 11 12 22 25 34 64 90
```
