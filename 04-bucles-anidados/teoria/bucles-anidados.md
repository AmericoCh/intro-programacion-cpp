# Bucles Anidados en C++

# Objetivos de la clase

Al finalizar esta sesión, serás capaz de:

- Comprender qué es un bucle anidado.
- Analizar el flujo de ejecución de bucles dentro de otros bucles.
- Resolver problemas que requieren repetición múltiple.
- Construir patrones, tablas y algoritmos bidimensionales.
---

# 1. ¿Qué es un bucle anidado?

Un bucle anidado es una estructura repetitiva que se encuentra dentro de otra estructura repetitiva.

## Idea intuitiva

Imagina un calendario:

- El año tiene meses.
- Cada mes tiene días.

Para recorrer todos los días del año:

```text
para cada mes:
    para cada día:
        mostrar día
```

# 2. Estructura general

Sintaxis básica
```cpp
for (inicializacion1; condicion1; incremento1) {

    for (inicializacion2; condicion2; incremento2) {

        // instrucciones
    }

}
```

# 3. ¿Cómo se ejecutan?
Ejemplo:

```cpp
#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 3; i++) {

        for (int j = 1; j <= 2; j++) {

            cout << "i = " << i
                 << " , j = " << j << endl;
        }
    }

    return 0;
}
```

```txt
Salida
i = 1 , j = 1
        j = 2
i = 2 , j = 1
        j = 2
i = 3 , j = 1
        j = 2
```

**Explicación:**

Por cada iteración del bucle externo:

----> el bucle interno se ejecuta COMPLETAMENTE.


# 4. Ejemplo: Tabla de multiplicar

Implementar un programa que muestre la siguiente salida
```txt
1   2   3   4   5
2   4   6   8   10
3   6   9   12  15
4   8   12  16  20
5   10  15  20  25
```
```cpp
#include <iostream>
using namespace std;

int main() {
    // Escriba su solución aqui
    return 0;
}
```

**Concepto importante: Filas y columnas**

En muchos problemas:

* El bucle externo controla las FILAS.
* El bucle interno controla las COLUMNAS.

# 5. Dibujando patrones

Los bucles anidados son fundamentales para:

* Dibujar figuras.
* Trabajar con matrices.
* Procesar imágenes.
* Simular tableros.
* Crear gráficos ASCII.

**Ejemplo: Rectángulo de asteriscos**

Implemente un programa que muestre la siguiente salida
```txt
******
******
******
******
``` 

```cpp
#include <iostream>
using namespace std;

int main() {
    // Escriba su solución aqui
    return 0;
}
```

# 6. Triángulo creciente
Implemente un programa que muestre la siguiente salida
```txt
*
**
***
****
*****
```
```cpp
#include <iostream>
using namespace std;

int main() {
    // Implemente su solución aquí
    return 0;
}
```

**Idea importante**

El número de repeticiones del bucle interno puede depender del externo. 


# 7. Triángulo numérico
Implementar un programa que muestre la siguiente salida
```txt
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // Complete su código aquí
    return 0;
}
```


# 8. Uso de while anidados

Los bucles anidados no solo funcionan con for.

También pueden usarse:

`while dentro de while`

`for dentro de while`

`while dentro de for`

**Ejemplo** Utilizando `while` implementar un programa que imprima el siguiente patrón
```txt
1 2 3 4 
1 2 3 4 
1 2 3 4 
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // Implemente su código aquí
    return 0;
}
```

# 9. Errores comunes

* **Error 1:** olvidar reiniciar el contador interno

* **Error 2:** usar mal filas y columnas. Recomendación: Usar nombres descriptivos.

* **Error 3:** no entender cuántas veces se ejecuta

    **Ejemplo**
    ```cpp
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 4; j++) {

        }
    }
    ```

    ¿Cuántas veces se ejecuta el interior?

    5 × 4 = 20 veces

# 10. Ejemplo: pares ordenados
Implementar un programa que imprima la siguiente salida
```txt
(1,1) (1,2) (1,3)
(2,1) (2,2) (2,3)
(3,1) (3,2) (3,3)
```

```cpp
#include <iostream>
using namespace std;

int main() {
    // Implemente su código aquí
    return 0;
}
```

# 11. Aplicaciones de bucles anidados

Los bucles anidados aparecen en:

* Videojuegos
* recorrer mapas
* mover enemigos
* detectar colisiones
* Inteligencia Artificial
* procesamiento de matrices
* imágenes
* redes neuronales
* Ciencia
* simulaciones físicas
* análisis numérico
* Ingeniería
* matrices
* modelos matemáticos

# 12. Ejemplo: tablero de ajedrez

Implemente un programa que imprima el siguiente tablero

```txt
B N B N B N B N 
N B N B N B N B 
B N B N B N B N 
N B N B N B N B 
B N B N B N B N 
N B N B N B N B 
B N B N B N B N 
N B N B N B N B 
```
```cpp
#include <iostream>
using namespace std;

int main() {
    // Complete su código aquí
    return 0;
}
```
