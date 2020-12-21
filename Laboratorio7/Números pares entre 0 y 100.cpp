#include <stdio.h>

int main(){
    int numero;

    printf( "Números pares entre 0 y 100\n" );

    for ( numero = 0 ; numero <= 100 ; numero += 2 )
    {
        printf( "%d ", numero );
    
    }

    return 0;
    }