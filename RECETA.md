# Receta: El mayor de tres números

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingresa tres numeros: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "El numero mayor es: " << a;
    }
    else if (b >= a && b >= c) {
        cout << "El numero mayor es: " << b;
    }
    else {
        cout << "El numero mayor es: " << c;
    }

    return 0;
}