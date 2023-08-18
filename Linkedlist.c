#include <stdlib.h>
#include <stdbool.h>
#include "Linkedlist.h"
#include "log.h"

void init(LinkedList *list){
  log_info("Inicializando a lista");
  log_trace("init->");
  
  list->first = NULL;
  list->size = 0;
  log_debug("list->first: %p", list->first);
  log_debug("list->size: %d",list->size);
  log_trace("init<-");
}
int enqueue(LinkedList *list, void *data){
  log_info("Adicionando dados na última posição da lista");

  Node* no = (Node*)malloc(sizeof(Node));
  no->data=data;
  no->next=NULL;
  
  
  if(list->size == 0){

    list->first = no;
    log_info("Lista vazia");
  }else{
    Node *auxiliar = list->first;
    while(auxiliar->next != NULL) log_info("Navegando entre os espaços de memória"),auxiliar = auxiliar->next;
    auxiliar->next = no;
    log_trace("enqueue<-");
  }
  list->size++;
  
}
/*
bool isEmpty(LinkedList *list) {
	log_info("Verificando se a lista está vazia");
	log_trace("isEmpty ->");
	if (list == NULL) {
		log_error("Parâmetro inválido");
		log_debug("list: %p", list);
		return true;
	}
	log_debug("list->size: %d", list->size);
	log_trace("isEmpty <-");
	if (list->size == 0) {
		return true;
	} else {
		return false;
	}
}

void* dequeue(LinkedList *list) {
  log_info("Removendo o primeiro dado da lista");
  log_trace("dequeue ->");
  if(isEmpty(list)){
    log_warn("Lista vazia");
    return NULL;
  }else{
    log_debug("list->first %p",list->first);
    Node *aux = list->first;
    void *data = aux->data;
		list->first = list->first->next;
		list->size -= 1;
		free(aux);
		log_info("Dado removido com sucesso!");
		log_debug("Nó removido: %p", aux);		
		log_debug("data returned: %p", data);
		log_trace("dequeue <-");
		return data;
	}
}
*/
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