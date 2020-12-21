#include <stdio.h>

int numx;
int sumatoria = 0;

int main() {
	do { printf("Ingrese un numero entero: \n");
		scanf("%i",&numx);
		
		sumatoria = numx + sumatoria;
		} while (numx > 0);
	
	printf("La suma de todos los numeros es: %i", sumatoria);
	
  return 0;
	
	}