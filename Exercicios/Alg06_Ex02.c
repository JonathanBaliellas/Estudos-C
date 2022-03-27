/******************************************************************************

2-Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida 
em m/s  (metros por segundo). A formula de conversao  e: M = K/3.6, sendo K a 
velocidade em km/h e M em m/s.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float k, m;
    
    //INÍCIO
    //Entrada
    printf("Este programa converte km/h em m/s.\n");
    printf("Informe a velocidade em km/h: ");
    scanf("%f", &k);
    
    //Processamento
    m = k/3.6;
    
    //Saída
    printf("%.1f km/h equivale a %.2f m/s.", k, m);
}