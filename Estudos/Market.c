#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}DtVenc;

typedef struct alimentos{
    char NomeProduto[100];
    struct produto *proximo;
}Alimentos;

typedef struct bebidas{
    char NomeProduto[100];
    struct produto *proximo;
}Bebidas;

typedef struct ferramentas{
    char NomeProduto[100];
    struct produto *proximo;
}Ferramentas;

void inserir_bebidas(Bebidas **bebida, char* nomeP){
    Bebidas *aux, *novoP = malloc(sizeof(Bebidas));
    if(novoP){
        strncpy(novoP -> NomeProduto, nomeP,100);
        novoP -> proximo = NULL;
        if(*bebida == NULL){
            *bebida = novoP;
        }else{
            aux = *bebida;
            while(aux->proximo !=NULL) aux = aux->proximo;
            aux->proximo = novoP;
        }
    }
}

void inserir_alimentos(Alimentos **alimento, char* nomeP){
    Alimentos *aux, *novoP = malloc(sizeof(Alimentos));
    if(novoP){
        strncpy(novoP -> NomeProduto, nomeP,100);
        novoP -> proximo = NULL;
        if(*alimento == NULL){
            *alimento = novoP;
        }else{
            aux = *alimento;
            while(aux->proximo !=NULL) aux = aux->proximo;
            aux->proximo = novoP;
        }
    }
}

void inserir_ferramentas(Ferramentas **ferramenta, char* nomeP){
    Ferramentas *aux, *novoP = malloc(sizeof(Ferramentas));
    if(novoP){
        strncpy(novoP -> NomeProduto, nomeP,100);
        novoP -> proximo = NULL;
        if(*ferramenta == NULL){
            *ferramenta = novoP;
        }else{
            aux = *ferramenta;
            while(aux->proximo !=NULL) aux = aux->proximo;
            aux->proximo = novoP;
        }
    }
}

void imprimir_bebida(Bebidas *nome){
    printf("Bebidas:\n\n");
    while(nome!=NULL){
        printf("Nome do Produto: %s\n",nome->NomeProduto);
        nome = nome->proximo;
    }
    printf("\n");

}

void imprimir_alimentos(Alimentos *nome){
    printf("Alimentos:\n\n");
    while(nome!=NULL){
        printf("Nome do Produto: %s",nome->NomeProduto);
        nome = nome->proximo;
    }
    printf("\n------------\n\n");
    

}

void imprimir_ferramentas(Ferramentas *nome){
    printf("Ferramentas:\n\n");
    while(nome!=NULL){
        printf("Nome do Produto: %s\n",nome->NomeProduto);
        nome = nome->proximo;
    }
    printf("\n");

}
int main(){
    Alimentos *alimento = NULL;
    Bebidas *bebidas=NULL;
    Ferramentas *ferramentas=NULL;
    char NomeB[100],NomeF[100],NomeA[100];
    int esc = 0,esc1=0,esc2=0;
    while(esc != 3){
     printf("Bem vindo ao sistema do supermercadow Confessor\n\n");
     printf("Escolha uma opção:\n\n1-> Cadastrar produto\n2-> Mostrar os produtos Cadastrados\n3-> Finalizar o programa\n\nDigite: ");
     scanf(" %d",&esc);
     getchar();
     if(esc == 3) exit(0);
     switch(esc){
        case 1:
            system("clear");
            printf("Selecione o tipo de produto a ser cadastrado:\n\n1-> Bebidas\n2-> Alimentos\n3-> Ferramentas\n\nDigite: ");
            scanf(" %d",&esc1);
            getchar();
            switch(esc1){
                case 1:
                    system("clear");
                    printf("Bebidas:\n\n");
                    printf("Digite o nome do produto: ");
                    fgets(NomeB,100,stdin);
                    inserir_bebidas(&bebidas,NomeB);
                    break;
                case 2:
                    system("clear");
                    printf("Alimentos:\n\n");
                    printf("Digite o nome do produto: ");
                    fgets(NomeA,100,stdin);
                    inserir_alimentos(&alimento,NomeA);
                    break;
                case 3:
                    system("clear");
                    printf("Ferramentas:\n\n");
                    printf("Digite o nome do produto: ");
                    fgets(NomeF,100,stdin);
                    inserir_ferramentas(&ferramentas,NomeF);
                    break;    
            /*printf("\nDigite o Peso do produto: ");
            scanf(" %f",&produto.PesoProduto);
            printf("\nDigite o código do produto: ");
            scanf(" %d",&produto.CdProduto);
            printf("\nDigite o dia, mês e ano do vencimento do produto, no formato dd mm aa: ");
            scanf("%d %d %d",&produto.dtVenc.dia,&produto.dtVenc.mes,&produto.dtVenc.ano);*/
            }
            break;

        case 2:
            system("clear");
            printf("Digite a categoria:\n\n1-> Bebidas\n2-> Alimentos\n3-> Ferramentas\n\nDigite: ");
            scanf(" %d",&esc2);
            getchar();
            switch(esc2){
                case 1:
                    system("clear");
                    imprimir_bebida(bebidas);
                    break;
                case 2:
                    system("clear");
                    imprimir_alimentos(alimento);
                    break;
                case 3:
                    system("clear");
                    imprimir_ferramentas(ferramentas);
                    break;
                default:
                    break;
            }
            break;
     }
    }

}