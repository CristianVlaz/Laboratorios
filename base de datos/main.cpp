/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* IIE344-1: ESTRUCTURA DE DATOS Y ALGORITMOS
*
* Tarea 1
*
* Autor:
*          Cristian Valencia Azar. 
*
* Fecha: 24-05-2022
*
* Descripción general del programa:
*Este programa tiene la finalidad de facilitar la evaluar una imagen a partir de patrones previamente 
*establecidos, este se encarga de analizar, recorriendo por filas buscando posibles 
*combinatorias, clasificando y finalmente entregar una respuesta por pantalla sobre que 
*hay en la imagen.
*/




//Librerias
#include<iostream>// ingreso y salida de datos
#include<windows.h>//incluye automáticamente gran cantidad de otras librerias
#include<string.h>//contiene la definición de macros, constantes, funciones
#include<fstream>//perimite leer archivos
#include<iomanip>//se utiliza para establecer el ancho del campo de la biblioteca ios
#include<stdio.h>//manipulación de entradas y salidas
#include"lista.h"
#include<string.h>//contiene un conjunto de funciones para manipular cadenas: copiar, cambiar caracteres, comparar cadenas, etc.
using namespace std;//dar acceso al espacio de nombres (namespace) std





//menu principal

void titulo1(){


printf("Sala de ventas\n\n\n");

}

//menu principal
void menu1(){
    printf("Menu de ventas\n\n");
    printf("(1)COMPRAS\n");
    printf("(2)VENTAS\n");
    printf("(3)INVENTARIO\n") ;
    printf("(4)SALIR\n");
    printf("Ingrese el numero de la opcion:");

  
}

//menu para compras
void menu2(){

    printf("COMPRAS\n");

    printf("(1)VER LOS PROVEEDORES\n");
    printf("(2)REGRESAR AL MENU PRINCIPAL\n");
	printf("Ingrese el numero de la opcion:");


}
//menu para ventas
void menu3(){


printf("VENTAS\n\n");


printf("(1)VENDER PRODUCTO\n");
printf("(2)VENTAS RELIZADAS\n");
printf("(3)REGRESAR\n");
printf("Ingrese el numero de la opcion:");

}
//menu para inventario
void menu4(){


				
	printf("INVENTARIO\n\n");


printf("(1)VER CODIGO DEL PRODUCTO\n");
printf("(2)VER PRODUCTO\n");
printf("(3)VER INVENTARIO\n");
printf("(4)REGRESAR\n");
printf("Ingrese el numero de la opcion:");

   

}
//COMPRAS


void mostrar_proveedores(){
FILE* archivo1 = fopen("proveedores.txt","r");
    char cadena[30];
    fgets(cadena, sizeof(cadena), archivo1);
    fprintf(stdout, "%s\n", cadena);
    fclose(archivo1);
	printf("\nFin programa");
}








//VENTAS
void ventas()
{
	{
	char rpta;//respuesta
	char productos[20];
	int n;
	int j=0;
	int sum=0;
	int precio;//precio de cada producto
	int cod;//codigo del producto
	int num;
	int total=0;
	char rpta1;
	do{
		printf("Ingrese nombre del producto");
	
	cin.getline(productos,20);//nombre de los productos
	ifstream archivo_codigo("codigodelproducto.txt");
	char car1;//para leer los codigos de los productos en el archivo .txt
	while(archivo_codigo.get(car1))
	{cout<<car1;}//imprime los codigos de los productos
	archivo_codigo.close();

	printf("Verifique si el producto existe en la lista y vea el precio s o n");
	
	cin>>rpta;
	if(rpta=='n'){break;}
	printf("Ingrese el codigo del producto");
	cin>>cod;//para leer los precios de cada codig0 de los productos en el archivo .txt
	
	
	
	
	
	
	
	//Precios de cada codigo 
	if(cod==00) {precio=1890;}	if(cod==01) {precio=899;}
	if(cod==02) {precio=1190;}  if(cod==03) {precio=449;}
	if(cod==04) {precio=699;}  	if(cod==05) {precio=5000;}
	if(cod==06) {precio=3890;}	if(cod==07) {precio=499;}

	
	
	
	
	
	
	printf("cuantas unidades desea?");
	



	cin>>num;
	total=num*precio;

	printf("Ingrese (s) si va a comprar otro producto");
	

	printf("Ingrese (n) si no va comprar otro producto");



	cin>>rpta;
	sum=sum+total;
	if(rpta=='n' || rpta=='N'){j=1;}
	}
	while(j==0);
	cout<<"Precio total= "<<sum<<endl;
	char nom1[20];
	char nom2[20];
	char nom3[20];
	fstream clientes;


	printf("Ingrese nombre y apellidos del cliente en cada linea");
	

	cin.getline(nom1,20);
	cin.getline(nom2,20);
	cin.getline(nom3,20);	
	clientes.open("clientes.txt",ios::out|ios::app);
	cout<<setiosflags(ios::showpoint)
	<<setprecision(2);
	clientes.put('\n');
	clientes<<nom1<<" "<<nom2<<" "<<nom3;
	clientes.close();
}	
}
		//corriendo el codigo
		


void clientes(){


    ifstream archivo_entra("clientes.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();

	printf("Fin programa");

}


	


//INVENTARIO
void codigodelproducto(){
	ifstream archivo_entra("codigodelproducto.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();

	printf("Fin programa");
	

}
void productos(){
	ifstream archivo_entra("producto.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();

	printf("Fin programa");


}
void inventario(){
	ifstream archivo_entra("inventario.txt");//leer archivo
	char car; //variable para leer
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();

	printf("\nFin programa");
	


}
int main(){
	printf("Proyecto base de datos y algoritmos\n");
	
	int opcion1;
	int opcion2;//operacion 1 y 2 para ingresar 

	do {
	titulo1();
	menu1();
	  cin>>opcion1;
	  	switch(opcion1){
	  		
	  		//limpiar pantalla
	  		//COMPRAS
		    case 1: system("cls");
			    do {
				  titulo1();			    	
		  		  menu2();
		  		  cin>>opcion2;
					switch(opcion2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    mostrar_proveedores();
					    break;
						case 2: break;

						default:printf("Ingrese una opcion valida");break;
		  				 


					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (opcion2!=2);
		    break;
		    //VENTAS
		    case 2: system("cls");
			    do {
				  titulo1();			    	
		  		  menu3();
		  		  cin>>opcion2;
					switch(opcion2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    ventas();
					    break;
					    case 2:  system("cls");
					    clientes();
					    break;					    
						case 3: break;

						default:printf("Ingrese una opcion valida");break;
		  				 


					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (opcion2!=3);		    
		    break;
		    //INVENTARIO
		    case 3: system("cls");//limpia pantall
			    do {
				  titulo1();			    	
		  		  menu4();
		  		  cin>>opcion2;
					switch(opcion2) //donde opci�n es la variable a comparar
					{
					    case 1:  system("cls");
					    codigodelproducto();
					    break;
					    case 2:  system("cls");
					    productos();
					    break;
					    case 3:  system("cls");
					    inventario();
					    break;											    
						case 4: break;

						default:printf("Ingrese una opcion valida");break;
		  				


					}
					cout<<endl;
					system("pause"); system("cls");
				}
				while (opcion2!=4);		    
			break;
			
			default:printf("Ha salido de nuestra tienda, que tenga un buen dia.");break;
		   


		}
	}while (opcion1!=4);	
	return 0;
}



