#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir(int *num){
    printf("%d\n",*num);//o * indica a utilização da passagem de
    *num = 80;
}
int main(){
    int idade = 35;
    imprimir(&idade); // Ao utilizar & eu estou pegando como referência a memória alocada pelo ponteiro
    printf(" no main: %d\n",idade);

    return 0;

}