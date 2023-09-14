#include <stdio.h>
/*1)Hacer la suma de los primeros 100 números impares*/
int main() {
    int n = 1; // Iniciamos con el primer número impar
    int suma = 0;
    int contador = 0;

    while (contador < 100) {
        suma += n; // Agregamos el número impar actual a la suma
        n += 2;    // Avanzamos al siguiente número impar
        contador++;
    }

    printf("La suma de los primeros 100 numeros impares es: %d\n", suma);

    return 0;
}
