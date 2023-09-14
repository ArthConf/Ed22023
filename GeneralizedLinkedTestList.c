#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "GeneralizedLinkedTest.h"

int main(){

    int esc = 0;
    int *num = (int*)malloc(sizeof(int));
    printf("Bom dia xomano, como ce ta?\nDigite 1 para -> Feliz\nDigite 2 para -> Poderia estar melhor\n\nDigite:");
    scanf(" %d",&esc);
    switch(esc){
        case 1:
         system("clear");
         printf("Muito bom!!\n\n");
         while(*num!=-1){
            printf("Digite um valor para o átomo: ");
            scanf(" %d",num);
            addAtom(&list,num);
            if(*num==-1) break;
         }
    }
    
}