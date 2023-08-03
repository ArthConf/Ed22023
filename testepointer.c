#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 10;
    int *numberP = &number;
    
    printf("Valor da variável number: %d\n",number);
    printf("Endereço da variável number: %p\n",&number);
    printf("Valor da variável numberP: %p\n",numberP);
    printf("Valor apontado por numberP: %d\n\n",*numberP);
    return EXIT_SUCCESS;
}