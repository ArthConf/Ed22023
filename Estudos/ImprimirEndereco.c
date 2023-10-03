#include <stdio.h>
#include <stdlib.h>

void imprimirEndereco(int Vetor[10]){
    system("clear");
    for(int i=0; i<10;i++){
        
        printf("Em v[%d] o endereço é: %p\t O valor é: %d\n\n",i,&Vetor[i],Vetor[i]);
    }
}

int main(){
    int v[10];
    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf(" %d",&v[i]);
    }
    imprimirEndereco(v);

}