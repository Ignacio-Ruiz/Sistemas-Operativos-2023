#include <stdio.h>
#include<pthread.h>

pthread_mutex_t lock;


void *Hilos()
{   
    //Bloqueando el acceso a region critica
    pthread_mutex_lock(&lock);
    //seccion critica
    int resultado = 0;

    for(int i = 0; i < 100000; i++ )
    {
        resultado += i;
    }

    printf("Hilo de la region critica. Resultado Suma: %d\n", resultado);

    //Liberando acceso region critica
    pthread_mutex_unlock(&lock);
    return NULL;
}

//Funcion principal
int main()
{
    pthread_t hilo1, hilo2;

    //inicializacion del mutex
    pthread_mutex_init(&lock, NULL);
    //metodo creacion
    pthread_create(&hilo1, NULL, Hilos, NULL);
    pthread_create(&hilo2, NULL, Hilos, NULL);

    //Poner los hilos en espera en la region critica
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    //destruccion del acceso a la region critica
    pthread_mutex_destroy(&lock);
}