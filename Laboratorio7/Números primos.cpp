
#include <stdio.h>

int num1; 
int contador = 0;

int main() {
	
	printf("Ingrese un numero entero: \n");
	scanf("%i", &num1);
	printf("Los numeros primos entre 1 a %i son: \n\n", num1);
	
	for (int i = 1 ; i <= num1 ; i ++ ) {
		for (int i2 = 1 ; i2 <= i ; i2 ++) {
			if (i % i2 == 0) {
				contador = contador + 1;
				}
			}
			
		if (contador == 2) {
			printf("%i\n", i);
			contador = 0;
			} else {
			contador = 0;
			}
      }
      return 0;
	
	}