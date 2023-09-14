#include<stdio.h>
/* Desarrollar un programa que sea capaz de determinar si un triángulo es equilátero,
escaleno o isósceles, según sus lados (valores enteros) que serán ingresados por teclado por
el usuario.*/
int main(){
/*Pedir al usuario que ingrese los valores de los lados del triángulo*/
lado1 = int(input("Ingrese la longitud del primer lado: "))
lado2 = int(input("Ingrese la longitud del segundo lado: "))
lado3 = int(input("Ingrese la longitud del tercer lado: "))

/*Comprobar si es un triángulo válido*/
if (lado1 + lado2 > lado3 and lado1 + lado3 > lado2 and lado2 + lado3 > lado1){
    printf ("El triangulo tiene 3 lados y son validos");
         /*Determinar si es equilátero, isósceles o escaleno*/
    if lado1 == lado2 and lado2 == lado3:
        print("Es un triángulo equilátero.")
    else if lado1 == lado2 or lado1 == lado3 or lado2 == lado3:
        print("Es un triángulo isósceles.")
    else:
        print("Es un triángulo escaleno.")
else:
    print("No es un triángulo válido.")
}
}