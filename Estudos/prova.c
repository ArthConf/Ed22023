//
//  DynamicStack.h
//  Prova de Estrutura de Dados 2
//
//  Enviar implementação C, conforme segue:
//  Para: preti.joao@ifmt.edu.br
//  Assunto: Prova 1 de Estrutura de Dados 2
//  Mensagem: <Nome Completo do Estudante>
//  Anexo: DynamicStack.c

#include <stdio.h>
#include <stdlib.h>
#include "DynamicStack.h"

typedef void (*printNode)(void*);

void init(DynamicStack *stack){ //1,0pt
    stack->  top = NULL;
    stack -> size = 0;
}                   
int push(DynamicStack *stack, void *data){
    Node *aux,*novo = malloc(sizeof(Node));
     if(novo){
        novo -> data = data;
        novo -> under = stack->top;
        stack->top = novo;
     }else printf("Não alocado");
}     
void* pop(DynamicStack *stack);   
                //2,0pt
void* top(DynamicStack *stack){

        printf("Primeiro valor: %d",*stack);

}
               
void* get_as_array(DynamicStack *stack);          //2,0pt
void show(DynamicStack *stack, printNode print);  //2,0pt


int main(){
    Node *lista;
    int esc=0, valor=0;
    init(&lista);
    log_info(" %d ",&lista);
    printf("Selecione uma opção de função:\n\n1-> Inserir valores\n2-> Ver valores do topo\n\nDigite: ");
    scanf(" %d",&esc);
    switch(esc){
        case 1:
            printf("Digite um valor: ");
            scanf(" %d",&valor);
            push(&lista,valor);
            break;
        case 2:
            top(&lista);
            break;
    }
}