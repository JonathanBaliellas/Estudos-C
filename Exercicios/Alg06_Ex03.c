/******************************************************************************

3-Leia uma distancia em milhas e apresente-a convertida em quilometros. 
A formula de conversao e:
K = 1. 61 ∗ M, sendo K a distancia em quilometros e M em milhas.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float km, milhas;
    
    //INÍCIO
    //Entrada
    printf("Este programa converte milhas em quilômetros.\n");
    printf("Informe a distância em milhas: ");
    scanf("%f", &milhas);
    
    //Processamento
    km = milhas * 1.61;
    
    //Saída
    printf("%.1f milhas equivalem a aproximadamente %.2f km.", milhas, km);
}
