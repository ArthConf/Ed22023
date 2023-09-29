#include <stdio.h>
#include <stdlib.h>

/* Aula 197: Alocação dinâmica de memória com a função malloc*/


int main(){
    int *x;

    x = malloc(sizeof(int));

    if(x==NULL){
        printf("Não alocou a memória");
    }else{
        printf("Foi alocado\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    } 

    return 0;
}