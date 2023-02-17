//
// Created by mauri on 17/02/23.
//

#include <malloc.h>
#include "HELPER.h"

Nodo *newnodo(numero) {

    Nodo * nodo=(Nodo*) malloc(sizeof (Nodo));

    nodo->sig=NULL;
    nodo->numero=numero;

    return nodo;
}

void encolar(Lista *lista, Nodo * nodoIngresar) {

    Nodo * aux=lista->pri;

    if(aux==NULL){
        lista->pri=nodoIngresar;
        lista->ult=nodoIngresar;
        lista->cantidad++;
    }else{
        lista->ult->sig=nodoIngresar;
        lista->ult=nodoIngresar;
        lista->cantidad++;
    }

}

Lista * newlist() {

    Lista * lista=(Lista*) malloc(sizeof (Lista));

    lista->pri=NULL;
    lista->ult=NULL;
    lista->cantidad=0;

    return lista;
}


void imprimir(Lista *lista) {

    Nodo * aux=lista->pri;

    for(;aux!=NULL; aux=aux->sig){printf("%d: ", aux->numero);}

    printf("\n");
}

int elemento(Lista *lista, int pos) {

    Nodo * aux=lista->pri;

    for (int i = 0; i < pos; ++i) {
        aux=aux->sig;
    }
    return aux->numero;
}

void eliminar(Lista * lista, int numero){

    Nodo * aux= lista->pri;

    if( aux==NULL){
        printf("la lista esta vacia\n");
        return;
    }
    Nodo * ant=NULL;
    Nodo * post=NULL;

    for (;aux!=NULL;aux=aux->sig) {
        if(aux->numero==numero){
            break;
        }
        ant=aux;
        post=aux->sig->sig;
    }

    if(ant==NULL){
        lista->pri=aux->sig;
        lista->cantidad--;
        return;
    }

    if(aux==NULL){
        printf("el elemento a eliminar no esta en la lista\n");
        return;
    }

    ant->sig=post;
    lista->cantidad--;

}