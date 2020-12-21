#include <stdio.h>

int numero1 = 0;
int numero2 = 1;
int suma;
int cantidad;

int main() {
	
	printf("Ingrese un numero entero > a 2: \n");
	scanf("%i", &cantidad);
	
	printf("Los %i resultados de Fibonacci son:\n", cantidad);
	printf("0\n");
	printf("1\n");
	
	for(int i = 3 ; i <= cantidad ; i ++) {
		
		suma = numero1 + numero2;
		
		printf("%i\n", suma);
		
		numero1 = numero2;
		numero2 = suma;
		
		}
	
	
	return 0;
	
	}