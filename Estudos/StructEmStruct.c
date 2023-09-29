#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char rua[20];
    char bairro[20];
    int NumeroCasa;
}Address;
typedef struct {
    char name[100];
    int idade;
    Address address;
    char gender[10];

}Pessoa;

int main(){
    Pessoa aluno1, aluno2;
    printf("Digite o nome do aluno 1: ");
    fgets(aluno1.name,100,stdin);
    printf("Digite o sexo do aluno: ");
    fgets(aluno1.gender,10,stdin);
    printf("Digite a idade do aluno: ");
    scanf(" %d",&aluno1.idade);
    while (getchar() != '\n');  //limpar buffer
    printf("Qual é a rua da casa: ");
    fgets(aluno1.address.rua,20,stdin);
    printf("\nQual é o bairro da casa: ");
    fgets(aluno1.address.bairro,20,stdin);
    printf("\nQual é o numero da casa: ");
    scanf(" %d",&aluno1.address.NumeroCasa);
    printf("\nO nome do Aluno 1 é: %s\nA idade do aluno: %d\nO sexo do aluno: %s",aluno1.name,aluno1.idade,aluno1.gender);
    printf("Endereço do aluno\n\nRua: %s\nBairro: %s\nNumero da casa: %d",aluno1.address.rua,aluno1.address.bairro,aluno1.address.NumeroCasa);
}