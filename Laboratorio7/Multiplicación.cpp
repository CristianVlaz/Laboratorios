
#include <stdio.h>

int num1;
int num2;
int contador = 0;

int main() {
	
	printf("Ingrese numeros enteros de la forma X , Y\n");
	
	scanf("%i , %i", &num1, &num2);
	
	for (int i = 0 ; i < num1 ; i ++ ) {
		
		contador = num2 + contador;
	
		}
	
	printf("El resultado es: %i\n", contador);
	
	return 0;
	
	}