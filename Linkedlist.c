#include <stdlib.h>
#include <stdbool.h>
#include "Linkedlist.h"


void init(LinkedList *list){
  list->first = NULL;
  list->size = 0;
}
int enqueue(LinkedList *list, void *data){
  Node* no = (Node*)malloc(sizeof(Node));
  no->data=data;
  no->next=NULL;
  
  
  if(list->size == 0){
    list->first = no;
  }else{
    Node *auxiliar = list->first;
    while(auxiliar->next != NULL) auxiliar = auxiliar->next;
    auxiliar->next = no;
  }
  list->size++;
  
}

void* dequeue(LinkedList *list);
void* first(LinkedList *list);
void* last(LinkedList *list);
int push(LinkedList *list, void *data);
void* pop(LinkedList *list);
void* top(LinkedList *list);
bool isEmpty(LinkedList *list);
int indexOf(LinkedList *list, void *data, compare equal);
void* getPos(LinkedList *list, int pos);
Node* getNodeByPos(LinkedList *list, int pos);
int add(LinkedList *list, int pos, void *data);
int addAll(LinkedList *listDest, int pos, LinkedList *listSource);
void* removePos(LinkedList *list, int pos);
bool removeData(LinkedList *list, void *data, compare equal);