#include <stdlib.h>
#include <stdbool.h>
#include "Linkedlist.h"

int push(LinkedList *list, void *data) {
  Node *newNode = (Node*) malloc(sizeof(Node));
  if (newNode==NULL) return -1;
  newNode->data = data;
  newNode->next = NULL;
  if (isEmpty(list)) //se a lista estiver vazia
    list->first = newNode; //novo nó é o primeiro
  else {
    newNode->next = list->first; //o topo atual será o segundo da lista
    list->first = newNode; //o novo nó será o topo
  }
  list->size++;
  return 1;
}