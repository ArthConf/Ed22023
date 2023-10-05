#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int data;
    struct no *proximo;
    int size;
}No;
void enqueue(No **lista,int num){
    No *aux,*node = malloc(sizeof(No));
    if(node){
        node -> data = num;
        node -> proximo = NULL;
        if(*lista==NULL){
            *lista = node;
        }else{
            aux = *lista;
            while(aux->proximo!=NULL) aux = aux->proximo;
            aux -> proximo = node;
        }
    }else{
        printf("Não foi alocado");
    }
}

No* buscar(No **lista, int num){
    No *aux,*no = NULL;
    aux = *lista;
    while(aux && aux->data!=num) aux = aux->proximo;
    
    if(aux){
        no = aux;
    }

    return no;
}

No* remover(No **lista,int num){
    No *aux, *remover = NULL;

    if(*lista){
        if((*lista) -> data == num){
            remover = *lista;
            *lista = remover->proximo;
        }else{
            aux = *lista;
            while(aux->proximo!=NULL && aux->proximo->data!=num) aux = aux -> proximo;

            if(aux->proximo!=NULL){
                remover = aux->proximo;
                aux -> proximo = remover->proximo;
            }
            
        }
    }
    return remover;
}

int main(){
    No *removido,*lista = NULL;
    int esc=0,valor=0;
    while(esc!=3){  
      printf("Escolha uma opção\n\n1-> Para inserir\n2-> para remover\n3-> para buscar\n\nDigite: ");
      scanf(" %d",&esc);
      switch(esc){
        case 1:
            printf("Digite um valor: ");
            scanf(" %d", &valor);
            enqueue(&lista,valor);
            break;
        case 2:
            printf("Digite o número que você deseja remover: ");
            scanf(" %d",&valor);
            removido = remover(&lista,valor);
            if(removido){
                printf("Valor removido: %d",removido->data);
                free(removido);
            }
            break;
        case 3: 
            printf("Digite um valor que você queira buscar: ");
            scanf(" %d",&valor);
            removido = buscar(&lista,valor);
            if(removido) {
                printf("Elemento encontrado: %d\tSeu endereço %p\n",removido->data,&removido->data);
            }else{
                printf("Elemento não encontrado");
            }
            break;
    
        case 4:
            exit(0);
       }
    }
}