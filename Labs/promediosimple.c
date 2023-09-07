#include <stdio.h>
/*1)Hacer un promedio simple de las primeras 4 notas*/
int main() {
  float uno, dos, tres, cuatro;
  float n=0;
  float promedio;


  printf("Ingrese la primera nota: \n");
  scanf("%f", &uno);

  printf("Ingrese la segunda nota: \n");
  scanf("%f", &dos);

  printf("Ingrese la tercera nota: \n");
  scanf("%f", &tres);

  printf("Ingrese la cuarta nota: \n");
  scanf("%f", &cuatro);

  float suma = uno + dos + tres + cuatro;
  printf("El promedio de notas es: %f \n", suma);
  if(n=suma){
    promedio=suma/n;
  }
}
  return 0;
}