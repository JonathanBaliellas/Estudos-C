/******************************************************************************

6-Faça um algoritmo em C que receba um numero inteiro e verifique se este e 
positivo ou negativo, exiba uma mensagem

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int num;
    
    //INÍCIO
    //Entrada
    printf("Este programa verifica se um número é positivo ou negativo.\n");
    printf("Informe um número inteiro: ");
    scanf("%i", &num);
    
    //Processamento/Saída
    if(num < 0){
        printf("O número %i é negativo.", num);
    } else {
        printf("O número %i é positivo.", num);
    }
}
