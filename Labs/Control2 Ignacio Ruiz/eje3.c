/*Crear un programa que permita contar la cantidad de veces que se ingresan números pares
y la cantidad de números impares hasta que se ingrese un número negativo. El cero no se
cuenta.*/
#include <stdio.h>

int main() {
  int numero;
  int pares = 0;
  int impares = 0;

  printf("Ingrese un numero: ");
  scanf("%d", &numero);

  while (numero > 0) {
    if (numero % 2 == 0) {
      pares++;
    } else {
      impares++;
    }

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
  }

  printf("Has ingresado %d numeros pares y %d numeros impares.\n", pares, impares);

  return 0;
}