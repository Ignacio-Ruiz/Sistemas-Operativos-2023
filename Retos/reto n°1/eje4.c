/*Realizar un programa que solicité por teclado los valores de dos matrices de 2x2, y mostrar
el resultado de la suma de las dos matrices por pantalla.*/
#include <stdio.h>

int main() {
    int matriz_1[2][2] = {{0}};
    int matriz_2[2][2] = {{0}};
    int resultado[2][2];

    // Primera matriz
    printf("Ingrese los valores de la primera matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Ingrese el valor de la posicion [%d][%d] de la primera matriz: ", i + 1, j + 1);
            scanf("%d", &matriz_1[i][j]);
        }
    }

    // Segunda matriz
    printf("Ingrese los valores de la segunda matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Ingrese el valor de la posicion [%d][%d] de la segunda matriz: ", i + 1, j + 1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    // Suma de las matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz_1[i][j] + matriz_2[i][j];
        }
    }

    // Resultado
    printf("La suma de las matrices es:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%6d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}