#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}DtVenc;

typedef struct{
    int CdProduto;
    char NomeProduto[100];
    float PesoProduto;
    DtVenc dtVenc;
}Produto;

int main(){
    Produto produto;
    int esc;
    while(esc != 3){
     printf("Bem vindo ao sistema do supermercadow Confessor\n\n");
     printf("Escolha uma opção:\n\n1-> Cadastrar produto\n2-> Mostrar os produtos Cadastrados\n3-> Finalizar o programa\n\nDigite: ");
     scanf(" %d",&esc);
     if(esc == 3) exit(0);
     switch(esc){
        case 1:
            system("clear");
            while(getchar() != '\n');
            printf("Digite o nome do produto: ");
            fgets(produto.NomeProduto,100,stdin);
            printf("\nDigite o Peso do produto: ");
            scanf(" %f",&produto.PesoProduto);
            printf("\nDigite o código do produto: ");
            scanf(" %d",&produto.CdProduto);
            printf("\nDigite o dia, mês e ano do vencimento do produto, no formato dd mm aa: ");
            scanf("%d %d %d",&produto.dtVenc.dia,&produto.dtVenc.mes,&produto.dtVenc.ano);
            break;

        case 2:
            printf("Nome do Produto %s",produto.NomeProduto);
     }
    }

}