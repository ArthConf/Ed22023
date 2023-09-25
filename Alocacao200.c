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
    int vet [10];

    printf("Digite o tamanho do vetor: ");
    scanf(" %d", &tam);
    srand(time(NULL)); 

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("\nMemoria alocada com sucesso\n\n");
        for(i = 0; i< tam; i++) *(vet + i)=rand() % 100; 
        for(i = 0; i < tam; i++) printf(" %d", *(vet + i));
        printf("Digite o tamanho do vetor: ");
        scanf(" %d", *(vet + i)); 
        
        printf("Digite o novo tamanho do vetor: ");
    
        vet = realloc(vet, tam);
        printf("\n\nVetor realocado: \n");
        for(i = 0; i < tam; i++) printf(" %d", *(vet + i));

      
    }else{
        printf("ERRO AO ALOCAR MEMÓRIA\n");
    }

    return 0;
}