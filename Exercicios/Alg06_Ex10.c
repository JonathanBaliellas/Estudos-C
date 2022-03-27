/******************************************************************************

10-Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, 
sabendo que ele recebeu um aumento de 25%.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float sal;
    
    //INÍCIO
    printf("Este programa calcula o aumento de 25%% sobre o salário.\n");
    
    //Entrada
    printf("Informe o salário do funcionário: R$ ");
    scanf("%f", &sal);
    
    //Processamento
    sal = sal+(sal*0.25);
    
    //Saída
    printf("O salário com 25%% de aumento é de R$ %.2f.", sal);
}
