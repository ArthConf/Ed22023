#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Aula 184: o que é e como criar ponteiro*/

int main(){
    int num = 10;
    int *p;
    p = &num;
    printf("Valor de num: %d",num);
    printf("\nEndereço de memória de num %p", &num);
    printf("\nValor de P: %d",*p);
    printf("\nEndereço de memória de P %p", &p);
}