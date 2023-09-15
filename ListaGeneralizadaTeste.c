#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "ListaGeneralizada.h"
#include "log.h"

int main(){
    FILE *file = fopen("program.log","w");
	
	log_set_level(LOG_DEBUG);
	log_add_fp(file, LOG_TRACE);
    Node* list = NULL;
    int esc = 0;
    int num=0;
         while(num!=-1){
            
            printf("Digite um valor para o átomo: ");
            scanf(" %d",&num);
            
            addAtom(&list,num);
            
            if(num==-1) break;
         }

         show(list);
}