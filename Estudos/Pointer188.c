#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir (int vet[], int tam){
    for(int i = 0; i<tam; i++){
         printf("%d ", *(vet+i));// Aritmética de ponteiros para avançar no vetor;
    printf("\n");
    }
    
}

int main(){

    int vet[10] = {45,89,68,25,17,76,34,29,57,44};
        
    imprimir(vet, 10);

    return 0;

}