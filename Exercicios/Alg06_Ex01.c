/******************************************************************************

1-Faça um programa em c que leia a temperatura em graus Celsius e converta para 
Fahrenheit.
F = (9 * C + 160) / 5

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float tempC, tempF;
    
    //INÍCIO
    //Entrada
    printf("Informe a temperatura em °C: ");
    scanf("%f°C equivale a ", &tempC);
    
    //Processamento
    tempF = (9 * tempC + 160)/5;
    
    //Saída
    printf("%.1f°C equivalem a %.1f°F", tempC,tempF);
}
