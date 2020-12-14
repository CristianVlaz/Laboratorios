  
#include <stdio.h>

int main(){
	int n1;
	int n2;
  int n3;
	
	printf("Ingrese el primer número:\n");
	scanf("%d", &n1);
	printf("Ingrese el segundo número:\n");
	scanf("%d", &n2);
  printf("Ingrese el tercer número:\n");
	scanf("%d", &n3);
	
	if((n1 > n2) && (n2 > n3)){
		printf("El número mayor es: %d\n", n1);
    } else if ((n2 > n1) && (n2 > n3)){
      printf("El número mayor es: %d\n", n2);
    } else if ((n3 > n1) && (n3 > n2)){
      printf("El número mayor es: %d\n", n3);
    } else {
      printf("Los números son iguales.\n");
    }


	
	return 0;
	}

