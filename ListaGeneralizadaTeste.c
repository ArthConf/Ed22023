#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "ListaGeneralizada.h"
#include "log.h"

int main(){
    FILE *file = fopen("program.log","w");
	
	log_set_level(LOG_DEBUG);
	log_add_fp(file, LOG_TRACE);
    Node* list = NULL;
    char name;
    int esc = 0;
    int num=0,esc1=0;
    while(esc!=-1){
        printf("Bom dia!!\n\nSeja bem vindo ao sistema do Supermercado Comper\n\n");
        printf("Digite um número para selecionar uma função: ");
        printf("Adicionar um produto-> 1\nExibir uma lista-> 2\nDigite: ");
        scanf(" %d", &esc);
        switch(esc){
         case 1:
                system("clear");
                printf("Digite o nome do produto: ");
                getchar(" %s",name);
                addAtom(&list,name);
                break;
         /*while(num!=-1){
            
            printf("Digite um valor para o átomo: ");
            scanf(" %d",&num);
            
            addAtom(&list,num);
            
            if(num==-1) break;
         }*/
         case 2:
          show(list);
          break;
         default:
           printf("erro");
           exit(0);
        }
    }
         
}