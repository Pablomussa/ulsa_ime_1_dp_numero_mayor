# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

El programa pide 3 nùmeros al usuario y determina cuàl de ellos es el mayor. Sirve para comparar tres valores de forma ràpida y obtener el valor mas grande. 

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. Primer nùmero: tipo double.
2. Segundo nùmero: tipo double. 
3. Tercer nùmero: tipo double. 

**Salida:**
1. El valor del nùmero mayor. 

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
Muestro el valor del mayor porque el objetivo del programa es determinar cuàl de los tres nùmeros tiene el valor màs alto. 

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
Uso leerDecimal porque permite ingresar nùmeros enteros y decimales. La elijo porque el problema no limita los nùmeros a valores enteros. 

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- Los tres datos deben ser nùmeros vàlidos. 
- Los nùmeros pueden ser positivos, negativos, cero o decimales. 

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
No hace falta validar un rango porque cualquier nùmero puede ser comparado; el 0 y los negativos tambièn son valores vàlidos.

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
Si dos nùmeros son iguales y son los mayores, muestro ese valor una sola vez. Si los tres son iguales, muestro ese mismo valor una sola vez. 

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
La funciòn de utilerias.h detecta si el dato ingresado no es un nùmero vàlido y mi programa se encarga de comparar los tres nùmeros. 

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
Antes de mostrar el resultado, el valor que voy a mostrar es mayor o igual que los tres nùmeros ingresados. 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 9 | 4 | 2 | 9 |
| 2 (el mayor en segunda posición) | 4 | 9 | 2 | 9 |
| 3 (el mayor en tercera posición) | 2 | 4 | 9 | 9 |
| 4 (con un empate) | 7 | 7 | 3 | 7 |
| 5 (con negativos) | -4 | -1 | -9 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** No, la receta funciono correctamente con los 5 casos. 
**¿Cuántas versiones de mi receta escribí hasta la final?** 1
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
Si, podia comparar cada nùmero con los otros dos directamente. Elegì revisar los nùmeros uno por uno porque la receta es màs sencilla de seguir y permite guardar el mayor de una variable.

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
Bienvenido a mi programa
Ingresa el primer n├║mero: 7
Ingresa el segundo n├║mero: 7
Ingresa el tercer n├║mero: 3
El n├║mero mayor es: 7
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida | std::cout << "Bienvenido a mi programa" << std::endl; |
|2. Leer primer nùmero | nùmero1= leerDecimal("Ingresa el primer nùmero: "); |
| 3. Leer segundo nùmero | nùmero2 = leerDecimal(ingresa el segundo nùmero: "); |
| 4. Leer tercer nùmero | nùmero3 = leerDecimal(ingresa el tercer numero: "); |
| 5. Comparar los tres nùmeros |  if / else if / else con >= y && |
| 6. Mostrar el resultado | std::cout << "El número mayor es: " << mayor << std::endl; |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
El paso que más me costó fue comparar los tres números porque tuve que usar if, else if, else, >= y && para considerar también los empates.

## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
El compilador acepta if (a > b > c), pero la expresiòn no compara los tres nùmeros como se espera. Con 3, 2 y 1, primero se evàlua 3 > 2 y da verdadero (1), despuès se compara 1 > 1, que es falso. 

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
Al cambiar >= por >, con 7, 7 y 3 el programa mostró 7, y con 5, 5 y 5 mostró 5. Los empates no se consideran correctamente con >.
**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
_____

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | Si |
| Mayor en medio | 4, 9, 2 | 9 | 9 | Si |
| Mayor al final | 2, 4, 9 | 9 | 9 | Si |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | Si |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | Si |
| Empate abajo | 8, 3, 3 | 8 | 8 | Si |
| Los tres iguales | 5, 5, 5 | 5 | 5 | Si |
| Todos negativos | -4, -1, -9 | -1 | -1 | Si |
| Con cero | -2, 0, -5 | 0 | 0 | Si |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | Si |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | 3 | Si |
| Caso propio 1 | 8,5,10 | 10 | 10 | si |
| Caso propio 2 | -10,-5,-20 | -5 | -5 | Si |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | Al principio faltaba traducir la receta completa a C++. | Agreguè las variables, lecturas y condiciones if/ else if/ else. | Si |
| 2 | Quise comprobar que funcionara con diferentes casos. | Probè empates, negativos, cero y decimales. | Si |

**Reto elegido (opcional):** _____

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ¿Còmo puedo mejorar mi programa para que sea màs sencillo? | Ya probè diferentes casos y comprobè que funciona correctamente. |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
_Aprendi a usar if, else 

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
Probarìa màs casos  

**¿Qué fue lo más difícil y cómo lo resolví?**
Comparar los nùmeros y lo resolvì haciendo pruebas. 

**¿Qué pregunta me quedó sin responder?**
la terminal

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
Esta, porque la receta fue sencilla de seguir.

**¿Pensé en los empates antes de programar o los descubrí al probar?**
 al revisar què pasaba cuando nùmeros eran iguales. 

## 14. Lista de verificación antes de entregar (Fase 5)

- [x] Llené las secciones 1 a 13 (no quedan `_____`)
- [x] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ ] Mi programa compila sin advertencias
- [x] Probé todos los casos de la tabla, incluidos los empates
- [x] Hice los Experimentos A y B y dejé el código correcto al terminar
- [x] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom