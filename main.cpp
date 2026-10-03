// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
    // Variables (siempre inicializadas)
    double numero1 = 0;
    double numero2 = 0;
    double numero3 = 0;
    double mayor = 0;
    // Paso 1: mensaje de bienvenida
    std::cout << "Bienvenido a mi programa" << std::endl;
    // Paso 2: leer los tres números
    numero1 = leerDecimal("Ingresa el primer número: ");

    // Paso 3: leer el segundo número
    numero2 = leerDecimal("Ingresa el segundo número: ");

    // Paso 4: leer el tercer número
    numero3 = leerDecimal("Ingresa el tercer número: ");

    // Paso 5: comparar los tres números
    if (numero1 >= numero2 && numero1 >= numero3) {
    mayor = numero1;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
    mayor = numero2;
    } else {
    mayor = numero3;
    }

    // Paso 6: mostrar el resultado
    
    std::cout << "El número mayor es: " << mayor << std::endl;
    // ¿Qué significa return 0;?
    return 0;
}