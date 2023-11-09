#include<stdio.h>
#include<pthread.h>

//inicializar el recurso compartido
int recurso_compartido=0;
 
//Mutex para proteger el recurso compartido
pthread_mutex_t mutex;

//barrera para sincronizar los hilos
pthread_barrier_t barrera;


void *hilo(void *arg){
    //bloqueo de acceso al recurso compartido
    pthread_mutex_lock(&mutex);
    //tarea a realizar
    printf("Hilo %d: Ingresando al recurso compartido\n", (int)arg + 1);
    recurso_compartido += 1;
    printf("Hilo %d: Saliendo del recurso compartido\n", (int)arg + 1);
    //liberacion el bloqueo del recurso compartido
    pthread_mutex_unlock(&mutex);

    //espera a que todos lo hilos terminen
    pthread_barrier_wait(&barrera);

    return NULL;
}

//funcion principal
int main() {
    pthread_t hilo1, hilo2, hilo3;
    //inicializa el mutex
    pthread_mutex_init(&mutex, NULL);
    //Se crean los 3  hilos
    pthread_create(&hilo1, NULL, hilo, NULL);
    pthread_create(&hilo2, NULL, hilo, NULL);
    pthread_create(&hilo3, NULL, hilo, NULL);
    
    //Poner los hilos en espera en el recurso compartido
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);
    
    // Imprime el valor final del recurso compartido
    printf("El valor final del recurso compartido es: %d\n", recurso_compartido);


  return 0;
  //Destruccion del mutex 
  pthread_mutex_destroy(&mutex);
}