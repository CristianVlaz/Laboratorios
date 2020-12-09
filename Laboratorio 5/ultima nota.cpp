  
#include <stdio.h>
float t1;
float t2;
float t3;
float ac;
float p1;
float p2;
int main(){
	printf("ultima nota\n");
	printf("Ingresar notas anteriores en orden.\n"); 
	printf("Ingrese las notas: \n");
	scanf("%f , %f , %f , %f , %f" , &t1, &t2, &t3, &ac, &p1);
	p2 = (4.0 - 1 * 0.1 - t2 * 0.1 - t3 * 0.1 - ac * 0.1 - p1 * 0.25) / 0.35;
  printf("Nota necesaria: %f", p2);
    }