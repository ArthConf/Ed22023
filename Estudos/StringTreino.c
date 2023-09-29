#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[20];
    printf("Digite o seu nome: ");
    fgets(name, 20, stdin);
    printf("\n\nSeu nome é %s",name);
}