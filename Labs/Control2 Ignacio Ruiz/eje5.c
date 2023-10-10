/*Realizar un algoritmo que pruebe si una palabra ingresada por el usuario es o no
palíndromo. Una palabra es palíndroma cuando se lee igual de derecha a izquierda que de
izquierda a derecha. Por ejemplo: ana, radar, oso, etc*/
#include <stdio.h>
#include <string.h>

int main() {
  char palabra[100];

  printf("Introduce una palabra: ");
  fgets(palabra, sizeof(palabra), stdin);

  palabra[strlen(palabra) - 1] = '\0';

  int inicio = 0;
  int fin = strlen(palabra) - 1;

  while (inicio < fin) {
    if (palabra[inicio] != palabra[fin]) {
      printf("La palabra '%s' no es palindroma.\n", palabra);
      return 0;
    }

    inicio++;
    fin--;
  }

  printf("La palabra '%s' es palindroma.\n", palabra);

  return 0;
}