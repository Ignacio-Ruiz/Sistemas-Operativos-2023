/*Desarrollar un programa que sea capaz de crear una matriz 3x3 de solo números enteros y
mostrar la matriz por consola.*/
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {7, 0, 9},
        {9, 7, 6},
        {10, 2, 1}
    };
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
