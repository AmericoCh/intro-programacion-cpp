# Clase 1: Introducción a la Programación

## 1. ¿Qué es programar?

Programar es darle instrucciones a una computadora para que realice tareas.

```
PROBLEMA
   ↓
ALGORITMO (pasos lógicos, en PSeInt)
   ↓
CÓDIGO (C++)
   ↓
COMPUTADORA
   ↓
RESULTADO
```
Un **programa** es un conjunto de pasos ordenados que la computadora sigue.

> **Ejemplo** (preparar un sándwich):
 
Algoritmo (pasos):

1. Tomar dos rebanadas de pan
2. Untar mantequilla en una de las rebanadas.
3. Colocar jamón encima
4. Agregar queso
5. Cerrar el sándwich con la otra rebanada
5. Cortar si es necesario
6. Servir

Así como una receta guía a una persona, un programa guía a la computadora.
```
🍞 Ingredientes → Datos de entrada
👨‍🍳 Pasos → Instrucciones (código)
🥪 Sándwich → Resultado (salida)
```
---

## 2. ¿Qué es un algoritmo?

Un **algoritmo** es una serie de pasos ordenados y finitos para resolver un problema.

### Características:

* Tiene inicio y fin
* Es Preciso: Sigue un orden lógico
* Resuelve un problema específico

---

## 3. Pseudocódigo (usando PSeInt)

El pseudocódigo es una forma de escribir algoritmos de manera sencilla, sin usar un lenguaje de programación real.

Usaremos PSeInt para practicar.

### Ejemplo 1:

```
Escribir el algoritmo para preparar un Sándwich en PSeInt
```

### Ejemplo 2:

```id="b4rdq8"
Escribir un algoritmo que solicite tu nombre y te envie en saludo
```

---

## 4. Variables

Una **variable** es un espacio en memoria donde se guarda información.

### Tipos básicos:

* `int`  números enteros (10, 25, -3)

* `char` datos tipo caracter ('A', 'b') 

* `double`,  `float`  números decimales (3.14, 2.5)

* `string`  texto ("Hola")

### Ejemplo en pseudocódigo:

```id="c6u4pw"
Definir edad Como Entero
Leer edad
```

---

## 5. Entrada y salida de datos

Permiten interactuar con el usuario.

* **Entrada**  el usuario ingresa datos
* **Salida**  el programa muestra información

### Ejemplo:

```id="2xwh92"
Leer edad
Escribir "Tu edad es:", edad
```

---

## 6. Estructura secuencial

Es la forma más simple: las instrucciones se ejecutan una después de otra.

### Ejemplo:

```id="zv6k0g"
Leer nombre
Leer edad
Escribir nombre
Escribir edad
```

---

##  7. Estructuras condicionales (if-else)

Permiten tomar decisiones.

“Si pasa algo, haz esto; si no, haz otra cosa”

### Ejemplo en pseudocódigo:

```id="8d2x3s"
Si edad >= 18 Entonces
    Escribir "Mayor de edad"
Sino
    Escribir "Menor de edad"
FinSi
```

---

## 8. Introducción a C++

C++ es un lenguaje de programación real que permite crear programas.

### Ejemplo: Primer programa

```cpp id="e6rdc1"
#include <iostream>
using namespace std;

int main() {
    cout << "Hola mundo" << endl;
    return 0;
}
```

---

## 9. Entrada y salida en C++

* `cin >>`  entrada de datos
* `cout <<`  salida de datos

### Ejemplo:

```cpp id="1h4txd"
int edad;
cout << "Ingresa tu edad: ";
cin >> edad;
cout << "Tu edad es: " << edad << endl;
```

---

## 10. Condicionales en C++

```cpp id="m3f8o1"
if (edad >= 18) {
    cout << "Mayor de edad";
} else {
    cout << "Menor de edad";
}
```
---


## Errores comunes

* Confundir `=` (asignación) con `==` (comparación)
* No declarar variables
* Olvidar llaves `{}` en C++
* No seguir el orden lógico del algoritmo

