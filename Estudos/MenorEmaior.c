#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menorEmaior(int *v,int tam){
    int maiorV = *v;
    int menorV = *v;//Obrigatoriamente devemos inicializar essas variáveis com a primeira posição do vetor, com a finalidade de percorrer todo o vetor;'
    for(int i = 0; i<tam;i++){
        if(menorV>*(v+i)) menorV = *(v+i);
        if(maiorV<*(v+i)) maiorV = *(v+i);
    }
    printf("Maior valor: %d\tMenor Valor: %d",maiorV,menorV);
    
}

int main(){
    int TamV=0;
    printf("Digite o tamanho do vetor: "); // Usuário coloca o tamanho do vetor
    scanf(" %d", &TamV); //Aqui eu leio o tamanho do Vetor e armazeno na variável: TamV
    int *vetor = malloc(TamV * sizeof(int)); // Aqui eu declaro a variável do tipo ponteiro "*vetor" e aloco um espaço de memória  do tamanho de TamV. 
    // Para alocar um espaço de memória do tamanho de TamV, eu uso "malloc(TamV * sizeof(int))" -> o que está acontecendo? Estou alocando um espaço de memória do tamanho de TamV

    for(int i = 0; i<TamV;i++){
        printf("Digite um número: ");
        scanf(" %d",&*(vetor+i));
    }
    menorEmaior(vetor,TamV);

    return 0;    
}