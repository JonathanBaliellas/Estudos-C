/******************************************************************************

1) faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde 
será apresentado uma lista de operações:

1-Saldo
2-Saque
3-Deposito

Ao iniciar o programa determine um valor inicio para a variável saldo, se o 
cliente escolher a opção 1 mostre o valor do saldo, caso escolha o valor 2 leia 
o valor a ser sacado e verifique se existe saldo suficiente, se o saldo for 
maior ou igual , deduza da variável saldo o valor solicitado, caso não haja 
saldo suficiente mostre a mensagem “Saldo Insuficiente”, caso a opção 3 seja 
escolhida adicione o valor informado de deposito ao saldo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int op;
    float saldo = 500.00, input;
    
    printf("Sistema ATM\n");
    
    inic:
    printf("Informe a operação desejada:\n");
    printf("(1-Saldo; 2-Saque; 3-Deposito): ");
    scanf("%i", &op);
    
    switch (op){
        case 1:{
            printf("\nSeu saldo é de R$ %.2f", saldo);
            break;
        }
        case 2:{
            sacar:
            printf("\nSeu saldo é de R$ %.2f\n", saldo);
            printf("Insira o valor para saque: R$ ");
            scanf("%f", &input);
            
            if(input <= saldo){
                saldo = saldo - input;
                printf("\nAguarde a contagem de notas...\n");
                printf("Retire seu dinheiro\n");
                printf("Saldo restante: R$ %.2f", saldo);
            }else{
                printf("\nSaldo Insuficiente...\n");
                printf("Por favor, insira outro valor...\n");
                goto sacar;
            }
            
            break;
        }
        case 3:{
            printf("\nSeu saldo é de R$ %.2f\n", saldo);
            printf("Informe o valor do depósito: R$ ");
            scanf("%f", &input);
            
            saldo = saldo + input;
            
            printf("\nObrigado! Recebemos o seu depósito.\n");
            printf("Seu saldo atual é de R$ %.2f", saldo);
            
            break;
        }
        default:{
            printf("\nOperação inválida...\n\n");
            goto inic;
        }
    }
}
