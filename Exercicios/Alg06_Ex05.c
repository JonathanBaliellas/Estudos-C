/******************************************************************************

5-Faca um programa que leia o valor de um produto e imprima o valor com 
desconto, tendo em vista que o desconto foi de 12%

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float preco;
    
    //INÍCIO
    //Entrada
    printf("Este programa calcula 12%% de desconto de um produto.\n");
    printf("Informe o preço do produto: ");
    scanf("%f", &preco);
    
    //Processamento
    preco = preco - preco * 0.12;
    
    //Saída
    printf("O produto 12%% de desconto, sendo vendido por R$ %.2f.", preco);
}
