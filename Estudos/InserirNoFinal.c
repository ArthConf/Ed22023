#include <stdio.h>
#include <stdlib.h>

//Procedimento para inserir no fim
typedef struct no{
    int valor;
    struct no proximo;
}No;

void inserir_fim(No **lista, int num){
    No *novo = malloc(sizeof(No));
    No *aux = malloc(sizeof(No));
    if(novo){
        novo -> valor = num;
        novo -> proximo = NULL;
        //É o primeiro?
        if(*lista==NULL){
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo != NULL){
                aux = aux->proximo;
            }
            aux -> proximo - novo;
        }
    }else printf("Não alocou");
}

imprimir()