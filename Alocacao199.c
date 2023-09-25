#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Aula 199: Como alocar um vetor dinâmico*/


int main(){
    
    int i, tam, *vet;
    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("\nMemoria alocada com sucesso\n\n");
        for(i = 0; i< tam; i++) *(vet + i)=rand() % 100; 
        for(i = 0; i < tam; i++) printf(" %d", *(vet + i));
    }else{
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }

    return 0;
}