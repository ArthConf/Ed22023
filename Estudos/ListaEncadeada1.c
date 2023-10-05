#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 243: Lista Simplesmente Encadeada
//Como inserir  no inicio da lista?

typedef struct no{
    int valor;
    struct no *proximo;//Avançar, necessário para continuar no NO seguinte
}No;
void init(No *lista){
    lista-> valor = 0;
    lista-> proximo = NULL;
}
//Procedimento para inserir no início
void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = *lista;//Para inserir novo No no inicio da lista
        *lista = novo;
    }else printf("Erro ao alocar memória!\n");
}
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
            aux -> proximo = novo;
        }
    }else printf("Não alocou");
}

void inseri_meio(No **lista,int num, int ant){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo -> valor = num;
        if(*lista ==NULL){
            novo -> proximo = NULL;
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->valor!=ant && aux->proximo!=NULL){
                aux = aux->proximo;
            }
            novo -> proximo = aux -> proximo;
            aux -> proximo = novo;



        }
    
    }
}

No* remover(No **lista,int num){
    No *aux,*remover = NULL;

    if(*lista!=NULL){
        if((*lista)-> valor == num){
            remover = *lista;// Aqui, remover recebe o valor do inicio  que está contido em lista. 
            *lista = remover->proximo; //o valor que estava em lista recebe o proximo valor de remover.
        }else{
            aux = *lista;
            while(aux->proximo!=NULL && aux->proximo->valor != num){
                aux = aux -> proximo;

            }
            if(aux->proximo){
                remover = aux->proximo;
                aux -> proximo = remover->proximo;
            }
        }
    }
    return remover;
}

void imprimir(No *no){
    printf("\nLista:\n");
    while(no!=NULL){
        printf("valor: %d\n",no->valor);
        no = no -> proximo;
    }
    printf("\n\n");
}
int main(){
    int esc,valor;
    No *removido,*lista=NULL;
    while(esc!=3){
        
        printf("Digite 1 para adicionar um valor na lista\nDigite 2 para inserir no fim\nDigite 3 para mostrar os valores da lista\nDigite 4 para remover\nDigite 5 para finalizar\nDigite: ");
        scanf(" %d",&esc);
        switch(esc){
         case 1:
            printf("Digite um valor: ");
            scanf(" %d",&valor);
            inserir_no_inicio(&lista,valor);
            break;
        case 2:
            printf("Digite um valor para inserir no fim: ");
            scanf(" %d",&valor);
            inserir_fim(&lista, valor);
            break;
         case 3:
            
            imprimir(lista);
            break;
         case 4:
            printf("Digite um valor a ser removido: ");
            scanf(" %d",&valor);
            removido = remover(&lista,valor);
            if(removido){
                printf("\n\nElemento a ser removido: %d\n", removido->valor);
                free(removido);
            }
            break;
         case 5:
            system("clear");
            printf("Sistema finalizado");
            exit(0);
         default:
            printf("\n\nOPCAO INVALIDA");
         }
    }
    return 0;

}
void enqueue(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo -> valor = num;
        novo -> proximo = *lista;
        *lista = novo;
    }else printf("Não foi alocado");
}


void inserirfinal(No **lista, int num){
    No *aux,*novo = malloc(sizeof(No));
    if(novo){
        novo -> valor = num;
        novo -> proximo = NULL;
        if(*lista == NULL){
            *lista = novo;
        }else{
            aux = *lista;
            while(aux->proximo!=NULL) aux = aux -> proximo;
            aux -> proximo = novo;
        }

    }
}