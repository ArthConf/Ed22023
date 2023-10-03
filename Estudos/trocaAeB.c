#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(int *a, int *b){
    int auxA = *a;
    int auxB = *b;
    *a = auxB;
    *b = auxA;
}

int main(){
    int *a=0, *b=0;
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    printf("Digite um valor para A: ");
    scanf(" %d", a);
    printf("\n\nDigite um valor para B: ");
    scanf(" %d", b);
    printf("Valor de A: %d\t Valor de B: %d",*a,*b);
    troca(a,b);
    printf("\n\nValores trocados\nValor de A: %d\tValor de B: %d",*a,*b);

}