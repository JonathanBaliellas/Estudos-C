/******************************************************************************

Aula 5 de Algoritmos
19.3.2022

2. Informe dois números reais e um número inteiro que represente a operação 
matemática a ser realizada (1-soma, 2-subtração, 3- multiplicação, 4-divisão) 
utilize o comando seleção aninhado e exiba o resultado da operação matemática 
escolhida.

Aluno: Jonathan Baliellas

*******************************************************************************/

#include <stdio.h>

int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    float n1, n2, result;
    int operacao;
    
    //INÍCIO
    //Entrada
    printf("Que operação matemática deseja realizar? (informe o número)\n");
    repOperacao:
    printf("(1-soma, 2-subtração, 3- multiplicação, 4-divisão): ");
    scanf("%i", &operacao);
    if (operacao > 4 || operacao < 1){ //Caso o usuário insira um valor inválido
        printf("Operação inválida. Por favor, utilize um dos valores válidos.\n");
        goto repOperacao;
    }
    
    printf("Informe dois números para realizar a operação:\n");
    scanf("%f %f", &n1, &n2);
    
    repValDiv:
    if (operacao == 4 && n2 == 0){ //Para o caso de divisão por zero
        printf("Não é possível dividir por zero!\n");
        printf("Por favor, informe outro divisor: ");
        scanf("%f", &n2);
        goto repValDiv;
    }
    
    //Processamento/Saída
    if (operacao == 1){ //Soma
        result = n1 + n2;
        printf("%.1f + %.1f = %.1f", n1, n2, result);
    } else if (operacao == 2){ //Subtração
        result = n1 - n2;
        printf("%.1f - %.1f = %.1f", n1, n2, result);
    } else if (operacao == 3){ //Multiplicação
        result = n1 * n2;
        printf("%.1f x %.1f = %.1f", n1, n2, result);
    } else { //Divisão
        result = n1 / n2;
        printf("%.1f / %.1f = %.1f", n1, n2, result);
    }
}
