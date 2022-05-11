/******************************************************************************

5- Reutilizando o algoritmo do caixa eletrônico, implemente um laço faça 
enquanto que verifique se o usuário deseja continuar, caso a variável coletada 
for igual 1 reinicie o laço, mantendo o valor do saldo.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int op, continuar;
    float saldo = 500.00, input;
    
    printf("Sistema ATM\n");
    
    do{
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
        
        do{
            printf("Deseja continuar? (1-Sim; 0-Não) ");
            scanf("%i",&continuar);
            if(continuar != 1 && continuar != 0){
                printf("Operação inválida!\n");
            }
        }while(continuar != 1 && continuar != 0);
    }while(continuar == 1);
}