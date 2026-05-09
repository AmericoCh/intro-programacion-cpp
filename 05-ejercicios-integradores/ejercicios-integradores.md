## Ejercicio 1 - Intercambio circular
Leer tres números enteros `a`, `b` y `c`.

Realizar un intercambio circular:
- `a` toma el valor de `b`
- `b` toma el valor de `c`
- `c` toma el valor original de `a`

Mostrar los valores finales.


## Ejercicio 2 - Expresión algebraica
Leer valores reales `x`, `y` y `z`.

Calcular:

$$
E = \frac{x^2 + 2y - z}{xy + z^2}
$$

Mostrar el resultado con 4 decimales.

## Ejercicio 3 - Conversión de tiempo
Leer una cantidad total de segundos y convertirla a:
- horas
- minutos
- segundos

Ejemplo:
```txt
Entrada: 3672
Salida: 1 h 1 min 12 s
```

## Ejercicio 4 - Mayor de tres números
Leer tres números distintos y mostrar:
- el mayor
- el menor
- el valor intermedio


## Ejercicio 5 - Número primo
Determinar si un número es primo.

---

## Ejercicio 6 - Conteo de dígitos
Leer un entero positivo y determinar:
- cantidad de dígitos
- suma de dígitos
- producto de dígitos


## Ejercicio 7 - Estadísticas de alumnos
Leer notas hasta ingresar `-1`.

Calcular:
- promedio
- mayor nota
- menor nota
- cantidad de aprobados
- cantidad de desaprobados


## Ejercicio 8 - Patrón en X

Imprimir,para n = 7
```txt
*     *
 *   *
  * *
   *
  * *
 *   *
*     *
```



## Ejercicio 9 - Número Armstrong
Implementar un programa para determinar si un número cumple:
$$
abc = a^3 + b^3 + c^3
$$

Ejemplo:
$$
153 = 1^3 + 5^3 + 3^3
$$

Modifique su código para imprimir todos los números que cumplen dicha condición en un rango [m, n] dado por el usuario


## Ejercicio 10 — Aproximación de pi

La siguiente serie infinita, conocida como la serie de Leibniz, permite aproximar el valor de π:

$$
\pi \approx 4\left(1 - \frac13 + \frac15 - \frac17 + \cdots \right)
$$

Desarrolle un programa en C++ que:

1. Lea la cantidad de términos `n` de la serie.
2. Calcule la aproximación de π utilizando exactamente `n` términos.
3. Muestre:
   - el valor aproximado obtenido,
   - el valor real de π (`3.141592653589793`),
   - el error absoluto cometido.

Además:

4. Mostrar cada término generado de la serie en pantalla.

Ejemplo para `n = 5`:

```txt
1 - 1/3 + 1/5 - 1/7 + 1/9
Mostrar el resultado parcial después de cada iteración.

Ejemplo:

Iteración 1: 4.000000
Iteración 2: 2.666667
Iteración 3: 3.466667
```

Determinar en qué iteración el error absoluto es menor que: 0.1, 0.01, 0.001

Finalmente indicar:
* cuántos términos positivos hubo,
* cuántos términos negativos hubo.

```txt
Ejemplo de Entrada
Ingrese cantidad de términos: 1000
Ejemplo de Salida
Aproximación de PI: 3.1405926538
PI real:            3.1415926536
Error absoluto:     0.0010009998

Términos positivos: 500
Términos negativos: 500
```

**Desafíos adicionales**

* Mostrar únicamente las primeras 20 iteraciones aunque n sea grande.

* Detener automáticamente el programa cuando el error sea menor que 0.000001.

* Comparar la velocidad de convergencia para distintos valores de n.

* Construir una tabla alineada:

    ```txt

    Iteración     Aproximación       Error
    ------------------------------------------
    1             4.000000           0.858407
    2             2.666667           0.474926
    3             3.466667           0.325074
    ```