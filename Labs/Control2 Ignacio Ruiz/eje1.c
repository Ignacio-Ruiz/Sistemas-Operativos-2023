/*Escribir un programa en el que se pregunte al usuario por una frase y una letra, donde
muestre por pantalla el número de veces que aparece la letra en la frase.
*/
#include <stdio.h>
#include <string.h>

int main() {
  char frase[80];
  char letra;

  printf("Ingrese una frase: ");
  fgets(frase, sizeof(frase), stdin);

  printf("Ingrese una letra de la frase : ");
  scanf("%c", &letra);

  int contador = 0;

  for (int i = 0; frase[i] != '\0'; i++) {
    if (frase[i] == letra) {
      contador++;
    }
  }

  printf("La letra '%c' aparece %d veces en la frase '%s'.\n", letra, contador, frase);

  return 0;
}