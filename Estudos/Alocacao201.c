#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Aula 201 : Como liberar memória alocada dinamicamente com a função FREE.*/


int main(){
    
   
    int i, tam, *vet;
   
    printf("\n===============================");
    printf("\nDigite o tamanho do vetor: ");
    scanf(" %d", &tam);
    srand(time(NULL)); 

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("\nMemoria alocada com sucesso\n\n");
        for(i = 0; i< tam; i++) *(vet + i)=rand() % 100; 
        for(i = 0; i < tam; i++) printf(" %d", *(vet + i));
        
        
        printf("\nDigite o novo tamanho do vetor: ");
        scanf(" %d", &tam);
        vet = realloc(vet, tam);
        printf("\n\nVetor realocado: \n");
        for(i = 0; i < tam; i++)
             printf(" %d", *(vet + i));
        printf("\n");

    free(vet);  
    }else{
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }
    printf(" %d", *vet);
    return 0;
}