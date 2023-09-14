/*Tomando el algoritmo anterior, solicitar los 5 nombres por consola, y almacenarlos en
Arrays. Luego mostrar los nombres guardados*/
#include <stdio.h>
#include <string.h>

int main() {
    char nombres[5] [25];

    printf("Ingrese 5 nombres:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre %d: ", i + 1);
        scanf("%s", nombres[i]);
    }

    printf("Nombres ingresados:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%s\n", nombres[i]);
    }
    return 0;
}
