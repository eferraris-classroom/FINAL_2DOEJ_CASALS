//
// Created by mauri on 17/02/23.
//

#ifndef BASE_PROJECT_HELPER_H
#define BASE_PROJECT_HELPER_H

typedef struct nodo{

    int numero;
    struct nodo * sig;

}Nodo;

typedef struct lista{

    int cantidad;
    Nodo * pri;
    Nodo * ult;

}Lista;

Lista *newlist();
Nodo *newnodo();

void encolar(Lista * lista, Nodo *nodoIngresar);

void imprimir(Lista *lista);


void eliminar(Lista *lista, int numeroEliminar);

int elemento(Lista *lista, int pos);

#endif //BASE_PROJECT_HELPER_H
