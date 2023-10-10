/*Desarrollar un programa que lea los valores de los catetos de un triángulo rectángulo y
calcule cuál es la hipotenusa, el área y el perímetro del triángulo
*/
#include <stdio.h>
#include <math.h> //biblioteca para trabajar con operaciones matematicas

int main() {
  float cateto1, cateto2, hipotenusa, area, perimetro;

  printf("Ingresa el valor del cateto 1: \n");
  scanf("%f", &cateto1);
  printf("Ingresa el valor del cateto 2: \n");
  scanf("%f", &cateto2);

  // Calculamos la hipotenusa
  hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

  // Calculamos el area
  area = (cateto1 * cateto2) / 2;

  // Calculamos el perimetro
  perimetro = cateto1 + cateto2 + hipotenusa;

  printf("La hipotenusa del triangulo es: %.2f\n", hipotenusa);
  printf("El area del triangulo es: %.2f\n", area);
  printf("El perimetro del triangulo es: %.2f\n", perimetro);

  return 0;
}