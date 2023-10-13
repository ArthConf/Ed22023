#include <stdio.h>
#include <stdlib.h>

//Quero inserir 15 elementos, segue a dica: 2 * 15 = 30. Queremos um número primo, então + 1 = 31.
#define TAM  31
// Aula 260: Tabela HASH, linear com o vetor

void inicializarTabela( int t[]){
    for( int i = 0; i < TAM; i++)  t[i] = 0;
}

int funcaoHash(int chave){
    return chave % TAM;
}

void inserir(int t[], int valor){
    int id = funcaoHash(valor);
    while(t[id]!=0){
        id = funcaoHash(id + 1);
    }
    t[id] = valor;
}

int busca(int t[], int chave){
    int id = funcaoHash(chave);
    while(t[id]!=0){
        if(t[id] == chave) return t[id];
        else id = funcaoHash(id+1);
    }
    return 0;
}

void imprimir(int t[]){
    for(int i = 0; i < TAM; i++){
        printf("Indice: %d\tValor: %d\n",i, t[i]);
    }
}

int main(){
    int opc=0,num = 0, retorno = 0,table[TAM];
    inicializarTabela(table);
    do{
        printf("\n0-> sai do programa\n1-> Inserir elementos\n2-> Buscar Elemento\n3-> imprimir elemento\n\nDigite: ");
        scanf(" %d",&opc);
        switch(opc){
            case 0:
                exit(0);
            case 1:
                printf("Digite um número maior que 0: ");
                scanf(" %d",&num);
                inserir(table, num);
                break;
            case 2:
                printf("Digite o valor a ser pesquisado: ");
                scanf(" %d",&num);
                retorno = busca(table, num);
                if(retorno != 0){
                    printf("Valor encontrado: %d",retorno);
                }else printf("Valor não encontrado");
                break;
            case 3:
                imprimir(table);
                break;
        }

    }while(opc != 0);

    return 0;
}