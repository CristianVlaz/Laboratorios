#ifndef lista_h
#define lista_h


#include<stdio.h>
#include"clientes.h"



typedef struct Lista{
    int cantidad;
	struct nodo* cabeza;
	Lista(){
		cabeza=NULL;
	}
}Lista;



typedef struct Nodo{
    Clientes clientes;
    struct Nodo*siguiente;
}Nodo;







Nodo* CrearNodo(Clientes* clientes);


void InsertarPrincipio(Lista*lista,Clientes*clientes);








#endif
