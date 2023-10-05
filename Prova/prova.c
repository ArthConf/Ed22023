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
#include "prova.h"


void init(DynamicStack *stack){ //1,0pt
    stack->top->data = NULL;
    stack->top->under = NULL;
    
}   
int push(DynamicStack *stack, void *data) {
    printf("entrei");
    DynamicStack *novo = malloc(sizeof(DynamicStack));
    if (novo) {
        printf("entrei");
        novo->top->data = data;
        novo->top->under = stack->top;
        stack->top = novo->top;
        stack->size++;
    }else printf("Não alocado");
    
              
}
void* pop(DynamicStack *stack);   
                //2,0pt
void* top(DynamicStack *stack){

        printf("Primeiro valor: %p",stack->top->data);

}
               
void* get_as_array(DynamicStack *stack);          //2,0pt
void show(DynamicStack *stack, printNode print);  //2,0pt


int main(){
    DynamicStack lista;
    int *valor;
    valor = malloc(sizeof(int));
    int esc=0;
    init(&lista);
    while(esc!=4){
     printf("Selecione uma opção de função:\n\n1-> Inserir valores\n2-> Ver valores do topo\n4-> finalizar o codigo\n\nDigite: ");
     scanf(" %d",&esc);
     switch(esc){
        case 1:
            printf("Digite um valor: ");
            scanf(" %d",valor);
            push(&lista,valor);
            
            break;
        case 2:
            top(&lista);
            break;
     }
    }

}

