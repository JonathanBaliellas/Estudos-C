/******************************************************************************

7-João comprou um microcomputador para controlar o rendimento diário de seu 
trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo 
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar um multa de 
R$ 4,00 por quilo excedente. João precisa que você faça um programa em C que 
leia a variável P (peso de peixes) e verifique se há excesso. Se houver, gravar 
na variável E (Excesso) e na variável M o valor da multa que João deverá pagar. 
Caso contrário mostrar tais variáveis com o conteúdo ZERO

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float P = 0, E = 0, M = 0;
    
    //INÍCIO
    printf("Este programa verifica se João excedeu o limite de 50 kg de peixe,\n");
    printf("informa o valor excedente e calcula a multa aplicada.\n");
    
    //Entrada
    printf("Informe o peso de peixes trazido por João: ");
    scanf("%f", &P);
    
    //Processamento
    if(P > 50){
        E = P - 50;
        M = E * 4;
    }
    
    //Saída
    printf("João trouxe %.2f kg de peixe.\n", P);
    printf("Peso excedente: %.2f kg.\n", E);
    printf("Multa a pagar: R$ %.2f.", M);
}
