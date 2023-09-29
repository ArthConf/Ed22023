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
    while(auxiliar->next != NULL){
     log_info("Navegando entre os espaços de memória");
     auxiliar = auxiliar->next;
    }
    auxiliar->next = no;
    log_trace("enqueue<-");
  }
  list->size++;
  
}

//Procurar o endereço do primeiro dado da lista
void *first(LinkedList *list){
  return(isEmpty(list))?NULL:list->first->data;
}

void* last(LinkedList *list){
    void* data = NULL;
    if(!isEmpty(list)) {
      Node *aux = list->first;
      while (aux->next != NULL){
          aux = aux->next;
          data = aux-> data;
      }
    }
}

/*
bool isEmpty(LinkedList(*list)){
  log_info("Verificando se a lista está vázia");
  return(list->size==0);
}*/


/*
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
void* dequeue(LinkedList *list){
  if(isEmpty(list)) return NULL;
  Node *trash = list->first;  
  list->first = list->first->next;
  void *data = trash->data;
  free(trash);
  list->size--;
  return data;

}
void* first(LinkedList *list);
void* last(LinkedList *list);

int push(LinkedList *list, void *data){
  Node *newNode = (Node*) malloc(sizeof(Node));
  if(newNode == NULL) return -1;
  newNode->data = data;
  newNode->next = NULL;
  if (isEmpty(list)) list->first = newNode;
  else newNode->next = list->first, list->first = newNode;
  list->size++;
  return 1;
}

void* pop(LinkedList *list){
  return dequeue(list);
}
void* top(LinkedList *list){
  return first(list);
}

bool isEmpty(LinkedList *list){
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

int indexOf(LinkedList *list, void *data, compare equal){
  if (isEmpty(list)) return -1;
  int count = 0;
  Node *aux = list -> first;
  while(aux!=NULL & !equal(aux->data,data)){
    aux=aux->next; 
    count++;
  }

  log_info("Posição do valor procurado: %d\n\n",count);
  return(aux==NULL)?-1:count; // if(aux==null) return -1; ou seja, se não encontrar, retorna -1. Se encontrar, retorna o contador.
}

bool verifica(void *data1,void *data2){
  return (*(int*)data1)==(*(int*)data2);
}

void* getPos(LinkedList *list, int pos);
Node* getNodeByPos(LinkedList *list, int pos);
int add(LinkedList *list, int pos, void *data);
int addAll(LinkedList *listDest, int pos, LinkedList *listSource);
void* removePos(LinkedList *list, int pos);
bool removeData(LinkedList *list, void *data, compare equal){
  if(isEmpty(list)) log_info("Lista vazia");return -1;
  Node *nodeRemove = NULL;
  if(equal(list->first->data,data)){
    nodeRemove = list->first;
    list->first = list->first->next;
    free(nodeRemove->data);
    free(nodeRemove);
    list->size--;
    log_info("Primeiro valor removido\n\n");
    return true;
  }else log_info("O primeiro valor não foi digitado\n\n");
  
}