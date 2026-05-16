# Ejercicios: Arreglos y Estructuras de Control en C++

> Estos ejercicios integran arreglos con estructuras de control (`if`, `for`, `while`).  
> Están ordenados de menor a mayor dificultad.

---

## Nivel 1 

### Ejercicio 1.1 — Suma y promedio

Leer 7 números enteros y mostrar:
- La suma total
- El promedio (como decimal)

**Salida esperada (con {4, 8, 2, 6, 10, 1, 5}):**
```
Suma: 36
Promedio: 5.14
```

---

### Ejercicio 1.2 — Solo los positivos

Leer 8 números (pueden ser negativos, cero o positivos).  
Mostrar únicamente los que son **positivos**, en el orden en que fueron ingresados.

**Ejemplo con {3, -1, 0, 7, -4, 2, -8, 5}:**
```
Positivos: 3 7 2 5
```

---

### Ejercicio 1.3 — Tabla de dobles

Leer 5 números enteros y mostrar una tabla con su valor original y su doble.

**Salida esperada:**
```
Numero   Doble
------   -----
   4       8
   9      18
   2       4
   7      14
   1       2
```

---

### Ejercicio 1.4 — Invertir y comparar

Leer 6 números. Mostrarlos en orden normal y luego en orden inverso.

**Ejemplo con {1, 2, 3, 4, 5, 6}:**
```
Normal:  1 2 3 4 5 6
Inverso: 6 5 4 3 2 1
```

---

## Nivel 2 

### Ejercicio 2.1 — Clasificación completa

Leer 10 números enteros. Contar y mostrar cuántos son:
- Positivos
- Negativos
- Ceros
- Pares
- Impares

---

### Ejercicio 2.2 — Mayor y menor

Leer 8 números. Encontrar y mostrar el **mayor** y el **menor**, junto con la posición (índice) donde se encuentran.

**Ejemplo con {5, 3, 9, 1, 7, 6, 2, 8}:**
```
Mayor: 9 (posicion 2)
Menor: 1 (posicion 3)
```

---

### Ejercicio 2.3 — ¿Cuántas veces aparece?

Leer un arreglo de 10 números. Luego pedir al usuario un número a buscar y mostrar cuántas veces aparece en el arreglo y en qué posiciones.

**Ejemplo con {3, 7, 3, 5, 3, 1, 9, 3, 2, 6} buscando el 3:**
```
El 3 aparece 4 veces.
Posiciones: 0 2 4 7
```

---

### Ejercicio 2.4 — Notas y estado

Leer las notas de 6 estudiantes (0–20). Para cada uno, mostrar si **aprobó** (≥ 10) o **desaprobó** (< 10). Al final mostrar:
- Cantidad de aprobados
- Cantidad de desaprobados
- El promedio del grupo

---

### Ejercicio 2.5 — Rango intercuartílico

Leer 6 números. Mostrar:
- La suma de los elementos del índice 1 al 4 (los del "medio")
- Cuántos de esos 4 elementos son mayores que el primero y el último

> *Este ejercicio trabaja el concepto de recorrer subrangos de un arreglo.*

---

## Nivel 3 

### Ejercicio 3.1 — El segundo mayor

Leer 7 números distintos. Encontrar el **mayor** y el **segundo mayor** sin ordenar el arreglo.

> Pista: necesitas dos variables: `mayor` y `segundoMayor`.

**Ejemplo con {4, 9, 2, 15, 7, 11, 3}:**
```
Mayor:        15
Segundo mayor: 11
```

---

### Ejercicio 3.2 — ¿Está ordenado?

Leer 6 números. Determinar si el arreglo está ordenado de **menor a mayor**, de **mayor a menor**, o si **no está ordenado**.

> Pista: recorre comparando cada elemento con el siguiente.

**Casos posibles:**
```
{1, 3, 5, 7, 9, 11} → "Ordenado ascendente"
{10, 8, 6, 4, 2, 0} → "Ordenado descendente"
{3, 1, 7, 2, 9, 4}  → "No está ordenado"
```

---

### Ejercicio 3.3 — Mover los negativos al final

Leer 8 números. Mostrar primero los positivos (y ceros), y luego los negativos, **sin modificar el arreglo original** (usa dos ciclos separados).

**Ejemplo con {3, -1, 5, -4, 0, 7, -2, 6}:**
```
Positivos y ceros: 3 5 0 7 6
Negativos:        -1 -4 -2
```

---

### Ejercicio 3.4 — Histograma de frecuencias

Leer 10 números del 1 al 5. Contar cuántas veces aparece cada número y mostrar un histograma con asteriscos.

**Ejemplo con {3, 1, 4, 3, 5, 1, 3, 2, 4, 3}:**
```
1: **
2: *
3: ****
4: **
5: *
```

---

### Ejercicio 3.5 — Intercambiar extremos

Leer 8 números. Intercambiar el primer elemento con el último, el segundo con el penúltimo, etc. (invertir el arreglo **en su lugar**, sin usar un segundo arreglo).

> Pista: necesitas una variable temporal `aux` para el intercambio.

**Ejemplo con {1, 2, 3, 4, 5, 6, 7, 8}:**
```
Original:   1 2 3 4 5 6 7 8
Invertido:  8 7 6 5 4 3 2 1
```

---

## Nivel 4 — 

### Ejercicio 4.1 — Ordenamiento burbuja

Leer 6 números. Ordenarlos de **menor a mayor** usando el algoritmo de burbuja.

**Algoritmo burbuja (pseudocódigo):**
```
repetir (n-1) veces:
    para i desde 0 hasta n-2:
        si numeros[i] > numeros[i+1]:
            intercambiar numeros[i] con numeros[i+1]
```

**Ejemplo con {5, 3, 8, 1, 9, 2}:**
```
Original:  5 3 8 1 9 2
Ordenado:  1 2 3 5 8 9
```

---

### Ejercicio 4.2 — Moda (el elemento más frecuente)

Leer 10 números enteros (entre 1 y 10). Determinar cuál es el número que aparece más veces (**la moda**). Si hay empate, mostrar todos los números empatados.

---

### Ejercicio 4.3 — Arreglos paralelos

Leer los nombres y notas de 5 estudiantes en **dos arreglos separados** (uno de strings, uno de enteros). Luego:
1. Mostrar la lista completa
2. Mostrar el nombre del estudiante con la nota más alta
3. Mostrar los que aprobaron (nota ≥ 10)

```cpp
string nombres[5];
int    notas[5];
```

---

### Ejercicio 4.4 — Eliminar duplicados lógicamente

Leer 8 números. Mostrar el arreglo eliminando los duplicados (sin modificar el arreglo, solo no imprimas los que ya salieron antes).

**Ejemplo con {3, 7, 3, 5, 7, 1, 3, 9}:**
```
Sin duplicados: 3 7 5 1 9
```

> Pista: para cada elemento, verifica si ya apareció en posiciones anteriores.

---

## Referencia rápida: estructuras de control en arreglos

```cpp
// Recorrido básico
for (int i = 0; i < TAM; i++) { ... }

// Recorrido inverso
for (int i = TAM - 1; i >= 0; i--) { ... }

// Subrango (índice 2 al 4)
for (int i = 2; i <= 4; i++) { ... }

// Contar los que cumplen condición
int contador = 0;
for (int i = 0; i < TAM; i++) {
    if (condicion) contador++;
}

// Buscar el mayor
int mayor = arreglo[0];
for (int i = 1; i < TAM; i++) {
    if (arreglo[i] > mayor) mayor = arreglo[i];
}

// Intercambiar dos elementos
int aux = arreglo[a];
arreglo[a] = arreglo[b];
arreglo[b] = aux;
```