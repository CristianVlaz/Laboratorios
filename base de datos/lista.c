#include"lista.h"
#include<stdlib.h>
#include<string.h>




Nodo* CrearNodo(Clientes* clientes){
    Nodo* nodo = (Nodo *) malloc(sizeof (Nodo));
    strncpy(nodo->clientes.nombre, clientes->nombre,50);
    strncpy(nodo->clientes.primerApellido,clientes->primerApellido,50);
    strncpy(nodo->clientes.segundoApellido,clientes->segundoApellido,50);
    nodo->siguiente = NULL;
    return nodo;
}


void DestruirNodo(Nodo*nodo){
    free(nodo);
}

void InsertarPrincipio(Lista*lista,Clientes*clientes){
    Nodo*nodo=CrearNodo(clientes);
    nodo->siguiente=lista->cabeza;
    lista->cabeza=nodo;
    lista->cantidad++;
}

void InsertarFinal(Lista*lista,Clientes*clientes){
    Nodo*nodo=CrearNodo(clientes);
    if(lista->cabeza == NULL){
        lista->cabeza=nodo;
    }else{
        Nodo*puntero=lista->cabeza;
        while(puntero->siguiente){
            puntero=puntero->siguiente;
        }
        puntero->siguiente=nodo;
    }
    lista->cantidad++;
 }

void InsertarDespues(int n,Lista*lista,Clientes*clientes){
    Nodo*nodo=CrearNodo(clientes);
    if(lista->cabeza == NULL){
        lista->cabeza=nodo;
    }else{
        Nodo*puntero=lista->cabeza;
        int posicion=0;
        while(posicion<n && puntero->siguiente){
            puntero=puntero->siguiente;
            posicion ++;
       }
        nodo->siguiente=puntero->siguiente;
        puntero->siguiente=nodo;
}
lista->cantidad++;
   }



Clientes* Obtener(int n,Lista*lista){
    if(lista->cabeza == NULL) {
    return NULL;
   }else{
       Nodo*puntero=lista->cabeza;
        int posicion=0;
       while(posicion<n && puntero->siguiente){
            puntero=puntero->siguiente;
            posicion ++;
       }
        if(posicion!=n){
            return NULL;
        }else{
            return &puntero->clientes;
       }
}
   }

int Contar(Lista* lista) {

return lista->cantidad;

}

int estaVacia(Lista *lista){
    return lista->cabeza == NULL;
}

void eliminarPrincipio(Lista *lista){
    if(lista->cabeza){
        Nodo *eliminado = lista->cabeza;
        lista->cabeza = lista->cabeza->siguiente;
        destruirNodo(eliminado);
        lista->cantidad--;
    }
}

void eliminarUltimo(Lista *lista){
    if(lista->cabeza){
        if(lista->cabeza->siguiente){
            Nodo *puntero = lista->cabeza;
            while(puntero->siguiente->siguiente)
                puntero = puntero->siguiente;
            Nodo *eliminado = puntero->siguiente;
            puntero->siguiente = NULL;
            destruirNodo(eliminado);
            lista->cantidad--;
        }

    } else{
        Nodo *eliminado = lista->cabeza;
        lista->cabeza = NULL;
        destruirNodo(eliminado);
        lista->cantidad--;
    }
}

void eliminarElemento(int n, Lista *lista){
    if(lista->cabeza){
        if(n == 0){
            Nodo *eliminado = lista->cabeza;
            lista->cabeza = lista->cabeza->siguiente;
            destruirNodo(eliminado);
            lista->cantidad--;
        } else if(n < lista->cantidad){
            Nodo *puntero = lista->cabeza;
            int posicion = 0;
            while(posicion < (n - 1)){
                puntero = puntero->siguiente;
                posicion++;
            }
            Nodo *eliminado = puntero->siguiente;
            puntero->siguiente = eliminado->siguiente;
            destruirNodo(eliminado);
            lista->cantidad;
        }
    }
}












