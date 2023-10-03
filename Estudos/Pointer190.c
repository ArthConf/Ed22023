#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Aprendendo a utilizaçao do ponteiro para struct.
typedef struct{
    int dia, mes, ano;
}Data;

void imprimirData(Data *x){
    printf("%d/%d/%d\n",x->dia,x->mes,x->ano);
}
int main(){
    Data data;
    Data *p;
    p = &data;
    
    data.dia=03;
    data.mes=10;
    data.ano=2023;
    imprimirData(p);
    printf("\n\n%d/%d/%d",data.dia,data.mes,data.ano);
}