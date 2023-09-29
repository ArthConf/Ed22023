#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "ListaGeneralizada.h"
#include "log.h"
int addAtom(Node **list, char atom){
    log_trace("AddAtom->");
    Node* no = (Node*)malloc(sizeof(Node));
    log_info("Alocando memória para o no");
    no -> atomList.atom = atom;
    no -> next = NULL;
    log_info("Verificando se a lista esta vázia ou cheia");
    if(*list == NULL){
        *list = no;
    }else{
        Node* aux = *list;
        log_debug("%p",aux);
        while(aux->next!=NULL){
            aux = aux->next;
            log_debug("aux navegando: %p",aux);
            log_debug("Valor de Aux: %d",aux->atomList.atom);
        }  
        aux->next = no;
        
    }
    
}

int addList(Node **list, Node **subList){
    return 0;
}
/*Node* head(Node *list){
    return NULL;
}
Node* tail(Node *list){
    return NULL;
}
*/void show(Node *list){
    printf("(");
    Node *aux=list;
    while(aux!= NULL){
    
    printf(" %s",aux->atomList.atom);
    aux= aux->next;
    } 
    printf(")");
}
/*bool search(Node *list, char atom){
    Node *aux = list;
    while(aux!=atomList.atom){
        aux = aux->next;
    }
    return false;
}
int depth(Node *list){
    return 0;
}*/