#include<stdio.h>

//      Variables
void menu(); 
void player1();
void player2();
void imprimirTablero(char tablero[3][3]);
int ingresarFila  (int fila);
int ingresarColumna  (int columna);
int analisis1(char tablero[3][3]); 
int analisis2(char tablero[3][3]); 


//tablero
char tablero[3][3] = {{'-','-','-'},
                      {'-','-','-'},
                      {'-','-','-'}};

char fila;
char columna;

int g=1;
int contador=1;

int main(){

   menu();

 while(g<=2){
     
    
        //Para player 1
    
       
       while(1){
            
            
            printf("Player 1\n");
            
            fila=ingresarFila(fila);
            columna=ingresarColumna(columna);
            
            
             if(tablero[fila][columna]=='-'){
    
                tablero[fila][columna]='x'; 
                contador++;
             break;
            }
             else{
            printf("Posicion ocupada\n");  
            }

       }
    
 imprimirTablero(tablero);
   

    g=analisis1(tablero); 
    if(g==2){

        break;

   }
    

  //para player 2
     
      if(contador==9){break;
     }
     while(1){
            printf("Player 2\n");
            
            fila=ingresarFila(fila);
            columna=ingresarColumna(columna);

             if(tablero[fila][columna]=='-'){
    
                tablero[fila][columna]='o'; 
                contador++;
             break;
            }
             else{
            printf("Posicion ocupada\n");  
            }

       }
        
 // Impresion del tablero
    imprimirTablero(tablero);
    
    g=analisis2(tablero);

   if(g==2){

        break;

   }
    if(contador==9){
    printf("Impate \n\n");
    break;
 }

 }


 return 0;
}
// Para que el jugador se oriente
void menu(){
    printf("\n\nJuego del Gato 2.0\n\n");
    printf("Funcionamiento de Cordenadas\n\n");
    printf("    0 1 2\n" );
      printf("   _ _ _ _\n" );
      printf("0 | - - -\n");
      printf("1 | - - -\n");
      printf("2 | - - -\n\n");
}

void Player1Ingreso(){
        printf("PLayer 1\n\n");
        
}

void imprimirTablero(char tablero[3][3]){ 
        printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){ // FILAS
            for(int j = 0 ; j < 3 ; j++){ // COLUMNAS 
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
        printf("\n\n");

}
//mensajes de ganadores
void ganador1(){
printf("-----------------\n");
printf("Player 1 Winner!! \n");
printf("-----------------\n");
}

void ganador2(){
printf("-----------------\n");
printf("Player 2 Winner!!\n");
printf("-----------------\n");
}
     
int analisis1(char tablero[3][3]){
    int g = 1;

 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
            
           
            ganador1();
            g=2;



        }
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{
            
            ganador1();
           g=2;



        }
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{

           
            ganador1();
           g=2; 




        }//Ganador
     }
    
    
    
     
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
      
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{

           
            ganador1();
            
            g=2;

        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         
         if(tablero[0][1]=='-'){
                g=1;
         }
      
        else{


            ganador1();
           g=2;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         
         if(tablero[0][2]=='-'){

         g=1;
         }
        else{

           
            ganador1();
            g=2;



        }//Ganador
     }  


     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         
         if(tablero[0][0]=='-'){
           g=1;    
         }
         
        else{

            ganador1();
            g=2;


        }//Ganador
     }


     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
        
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{

            
            ganador1();
            g=2;


        }//Ganador
       }
 if(g==1){
    
     return 1;

 }else{
   
     return 2;
     
     }   


}    

int analisis2(char tablero[3][3]){
 int g = 1;

 if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         
         if(tablero[0][0]=='-'){
            g=1;
         }
        else{
            
           
            ganador2();
            g=2;



        }//Ganador
     }
     
     //fila 1
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
       
         if(tablero[1][0]=='-'){
          g=1;   
         }
        else{
            
            ganador2();
           g=2;



        }//Ganador
        }
    //fila 2
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
        
         if(tablero[2][0]=='-'){
            g=1; 
         }
        else{

           
            ganador2();
           g=2; 




        }//Ganador
     }
    
    
    
     
     //columna 0
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         
         if(tablero[0][0]=='-'){
            g=1;   
         }
        else{

           
            ganador2();
            
            g=2;

        }//Ganador
     }
     
     //columna 1
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         
         if(tablero[0][1]=='-'){
                g=1;
         }
      
        else{


            ganador2();
           g=2;


        }//Ganador
      }
    //columna 2
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
   
         if(tablero[0][2]=='-'){

         g=1;
         }
        else{

           
            ganador2();
            g=2;



        }//Ganador
     }  
  

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){
           g=1;    
         }
         
        else{

            ganador2();
            g=2;


        }//Ganador
     }


     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         
         if(tablero[0][2]=='-'){
             g=1;
         }
        else{

            
            ganador2();
            g=2;


        }//Ganador
       }
 if(g==1){
   
     return 1;

 }else{
    
     return 2;
     
     }   


}    

int ingresarFila(int fila){

printf("Ingresar Cordenadas (Fila)\n");
scanf("%d",&fila);

return fila;
}
int ingresarColumna(int columna){
int c;
printf("Ingresar Cordenadas (Columna)\n");
scanf("%d",&columna);
return columna;
}