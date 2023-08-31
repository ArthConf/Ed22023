#include <stdlib.h>
#include <stdio.h>
#include "Linkedlist.h"

int main (){
    LinkedList list;
    int esc=0;
    printf("Este programa é de registro de compras\n\nCaso deseje sair, basta digitar '-1'");
    init(&list);
    int *num= (int*)malloc(sizeof(int));
    *num=0;
    while(*num!=-1){
    num= (int*)malloc(sizeof(int));
    printf("\n\nDigite os valores das compras: ");
    scanf("%d",num);

    enqueue(&list,num);
    printf("LIST SIZE: %d\n",list.size);
    scanf("%d",&esc);
    
    }
    int remove = *(int*)pop(&list);
    printf("Dado removido: %d\n",remove);
    /*int retirado = *(int*)dequeue(&list);
    printf("Dado removido: %d\n",retirado);*/

    
}