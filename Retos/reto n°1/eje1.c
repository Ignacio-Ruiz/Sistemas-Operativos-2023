/*Realizar un algoritmo que permita inicializar 5 nombres en Arrays. Utilizar ciclos para la
impresión de los nombres*/
#include<stdio.h>
#include<string.h>
int main(){
    char nombres[5] [25];     
    strcpy(nombres[0],"Juan");
    strcpy(nombres[1],"Pablo");
    strcpy(nombres[2],"Cecilia");
    strcpy(nombres[3],"Jimena");
    strcpy(nombres[4],"Roberto");

    for(int i=0; i<5; i++)
    {
        printf("%s\n", nombres[i]);
    }
    return 0;
}