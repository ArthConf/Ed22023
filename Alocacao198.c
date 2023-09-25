#include <stdio.h>
#include <stdlib.h>

/* Aula 198: Alocação dinâmica de memória com a função calloc*/


int main(){
    char *x;

    //x = malloc(sizeof(int));
    x = calloc(1, sizeof(char));
 
    if(x==NULL){
        printf("Não alocou a memória");
    }else{
        printf("Foi alocado\n");
        printf("x: %c\n", *x);
        *x = 'a';
        printf("x: %c\n", *x);
    } 

    return 0;
}