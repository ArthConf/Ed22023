#include <stdio.h>
#include <stdlib.h>

typedef struct{
    void data;
    struct no *proximo;
}No;

void inserir_inicio(No **lista, int num){

    No *novo = malloc(sizeof(No));
    if(novo){
        novo -> data = num;
        novo -> proximo = *lista;
        *lista = novo;
    }

}

int main(){

}