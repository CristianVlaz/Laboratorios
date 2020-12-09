
#include <stdio.h>
float r;
float pi = 3.14;
float p;
float a;
int main(){
	printf("Calculo del perimetro y area de un circulo\n");
	printf("Ingrese el radio de una circunferencia: \n");
	scanf("%f", &r);
	p = 2*r*pi;
  a = r*r*pi;
	printf("El area es: %f\n", a);
	printf("El perimetro es: %f\n", p);
	}