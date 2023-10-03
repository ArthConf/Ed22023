#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Aula 191: O que é ponteiro para ponteiro?

int main(){
    int A = 100, *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;
    printf("Endereço de A: %p\tConteudo de A: %d\n",&A, A);
    printf("Endereço de B: %p\tConteudo de B: %p\n",&B, B);
    printf("Conteúdo apontado por B %d\n", *B);
    printf("Endereço de C: %p\tConteudo de C: %p\n",&C, C);
    printf("Conteúdo apontado por C %d\n", **C);
    printf("Endereço de D: %p\tConteudo de D: %p\n",&D, D);
    printf("Conteúdo apontado por D %d\n", ***D);


}