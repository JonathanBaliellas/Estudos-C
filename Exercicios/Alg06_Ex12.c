/******************************************************************************

12-Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima:  Emprestimo concedido.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float sal, prest;
    
    //INÍCIO
    printf("Este programa realiza análise de empréstimo.\n");
    
    //Entrada
    printf("Informe o salário: R$ ");
    scanf("%f", &sal);
    printf("Informe o valor da prestação: R$ ");
    scanf("%f", &prest);
    
    //Processamento
    if(prest > sal*0.2){
        printf("Empréstimo não concedido");
    }else{
        printf("Empréstimo concedido");
    }
}
