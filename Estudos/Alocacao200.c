#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Aula 200 : Alocação Dinâmica de memória com a função realloc.
   -> Retorna um ponteiro para a nova região de memória.
   -> Se o ponteiro for nulo ela aloca memória.
   -> Se o novo tamanho for zero a memória é liberada.
   -> Se não houver memória suficiente retonar null.
*/


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

      
    }else{
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }

    return 0;
}