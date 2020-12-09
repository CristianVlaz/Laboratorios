#include <stdio.h>
float num1;
float num2;
float multi;
int main(){
	printf("Multiplicacion_float\n");
	printf("Ingresar numeros de la forma: *X.X , Y.Y*\n");
	printf("Ingresar los numeros: \n");
	scanf("%f , %f", &num1, &num2);
	 multi = num1 * num2;
	printf("El resultado de la Multiplacacion es: %f", multi);
	}