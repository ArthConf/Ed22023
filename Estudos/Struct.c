#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int age;
    char address[100];
    char gender[10];

}Pessoa;

int main(){
    Pessoa aluno1, aluno2;
    printf("Digite o nome do aluno 1: ");
    fgets(aluno1.name,100,stdin);
    printf("Digite o sexo do aluno: ");
    fgets(aluno1.gender,10,stdin);
    printf("Digite a idade do aluno: ");
    scanf(" %d",&aluno1.age);
    
    printf("\nO nome do Aluno 1 é: %s\nA idade do aluno: %d\nO sexo do aluno: %s",aluno1.name,aluno1.age,aluno1.gender);
}