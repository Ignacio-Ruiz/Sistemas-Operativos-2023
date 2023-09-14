#include <stdio.h>
/*1)Hacer un promedio simple de las primeras 4 notas*/
int main(){
  float uno, dos, tres, cuatro;

  printf("Ingrese la primera nota: \n");
  scanf("%f", &uno);

  printf("Ingrese la segunda nota: \n");
  scanf("%f", &dos);

  printf("Ingrese la tercera nota: \n");
  scanf("%f", &tres);

  printf("Ingrese la cuarta nota: \n");
  scanf("%f", &cuatro);

  float promedio = (uno + dos + tres + cuatro)/4;

  printf("El promedio de notas es: %f \n", promedio);

  return 0;
}