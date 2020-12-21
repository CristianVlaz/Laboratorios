#include<stdio.h>

int main(){
int num1;
int i;

printf("Divisores de un número\n");
printf("Introduce un numero:\n");
scanf("%d",&num1);

for(i=1;i<=num1;i++){
    if(num1%i==0){
        printf("%d, es divisor de %d \n",i,num1);
    }


    }


return 0;
}