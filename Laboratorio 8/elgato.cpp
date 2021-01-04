#include<stdio.h>

char tablero[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

char f;
char c;

int g=1;
int contador=0;


int main(){

    printf("El Gato\n");

while(g<=2){

     if(contador==9){
       break;
     }
       while(1){
            printf("Player 1\n");

            printf("Ingresar Cordenadas\n");
            scanf("%d, %d", &f ,&c);

             if(tablero[f][c]=='-'){

                tablero[f][c]='x';
                contador++;
             break;
            }
             else{
            printf("Posicion ocupada\n");  
            }

       }





    
    printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++)
        {
            for(int j = 0 ; j < 3 ; j++)
            {
                printf("%c ", tablero[i][j]);
                }
        
        }
    if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
         if(tablero[0][0]=='-'){

         }
        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;



        }
     }

     
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
    
         if(tablero[1][0]=='-'){

         }
        else{
            g++;
            printf("Player 1 Gana\n\n");
            break;



        }
        }
    
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
         
         if(tablero[2][0]=='-'){

         }
        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;



        }
     }



  
     
     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         
         if(tablero[0][0]=='-'){

         }
        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;


        }
     }

    
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
         
         if(tablero[0][1]=='-'){

         }

        else{


            g++;
            printf("Player 1 Gana\n\n");
            break;


        }
      }
    
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
         
         if(tablero[0][2]=='-'){


         }
        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;



        }
     }if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         
         if(tablero[0][0]=='-'){

         }

        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;


        }
     }
     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
         if(tablero[0][2]=='-'){

         }
        else{

            g++;
            printf("Player 1 Gana\n\n");
            break;


        }
       }


      if(contador==9){break;
     }
     while(1){
            printf("Player 2\n\n");

            printf("Ingresar Cordenadas\n");
            scanf("%d,%d",&f,&c);
          
             if(tablero[f][c]=='-'){

                tablero[f][c]='o';
                contador++;
             break;
            }
             else{
            printf("Posicion ocupada\n");  
            }

       }


    printf("Tablero\n");
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){ 
                printf("%c ", tablero[i][j]);
                }
            printf("\n");
        }
        printf("\n\n");


        
 
    
      if(tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]){
        
         if(tablero[0][0]=='-'){

         }
        else{

            g++;
            printf("Player 2\n\n");
            break;



        }
     }

    
      if(tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]){
         
         if(tablero[1][0]=='-'){

         }
        else{
            g++;
            printf("Player 2\n\n");
            break;



        }
        }
    
     if(tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]){
       
         if(tablero[2][0]=='-'){

         }
        else{

            g++;
            printf("Player 2\n\n");
            break;



        }
     }


     if(tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]){
         
         if(tablero[0][0]=='-'){

         }
        else{

            g++;
            printf("Player 2\n\n");
            break;


        }
     }

     
      if(tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]){
      
         if(tablero[0][1]=='-'){

         }

        else{


            g++;
            printf("Player 2\n\n");
            break;


        }
      }
 
     if(tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]){
        
         if(tablero[0][2]=='-'){


         }
        else{

            g++;
            printf("Player 2\n\n");
            break;



        }//Ganador
     }  
  //Revcion Diagonal --->

     if(tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]){
         //chequeo si son 0
         if(tablero[0][0]=='-'){

         }

        else{

            g++;
            printf("Player 2\n\n");
            break;


        }
     }
 

     if(tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0]){
       
         if(tablero[0][2]=='-'){

         }
        else{

            g++;
            printf("Player 2\n\n");
            break;


        }
       }







 }
 if(contador==9){
printf("Empate \n\n");
 }

 return 0;
}
