#include <stdio.h>
#include "HELPER.h"



int main() {

    Lista * lista=newlist();

    encolar(lista,  newnodo(2));
    encolar(lista, newnodo(4));
    encolar(lista, newnodo(3));
    encolar(lista, newnodo(1));

    imprimir(lista);
    printf("el tamanio de la lista es:%d\n", lista->cantidad);

    eliminar(lista, 1);

    imprimir(lista);
    printf("el tamanio de la lista es:%d\n", lista->cantidad);

    printf("el elemento en la posicion dada es el numero:%d \n",elemento(lista,0));
    printf("el elemento en la posicion dada es el numero:%d \n",elemento(lista,1));
    printf("el elemento en la posicion dada es el numero:%d \n",elemento(lista,2));



    return 0;
}





