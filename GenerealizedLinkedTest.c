#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "GeneralizedLinkedTest.h"
int addAtom(Node **list, int atom){

    Node* no = (int*)malloc(sizeof(Node));
    no -> atom = atom;
    no -> next = NULL;
    if(*list == NULL){
        *list = no;
    }else{
        Node* aux = list -> first;
        while(aux->next!=NULL) aux->aux = next;
        aux->next = no;
    }
    
}
int addList(Node **list, Node **subList){
    return 0;
}
Node* head(Node *list){
    return NULL;
}
Node* tail(Node *list){
    return 0;
}
void show(Node *list){
    return 0;
}
bool search(Node *list, int atom){
    return NULL;
}
int depth(Node *list){
    return 0;
}