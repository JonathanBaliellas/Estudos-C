/******************************************************************************

4-Leia um valor de comprimento em polegadas e apresente-o convertido em 
centımetros. A formula de conversao ̃e: ́ C = P ∗ 2, 54, sendo C o comprimento e
m centımetros e P o comprimento em polegadas.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float pol, cm;
    
    //INÍCIO
    //Entrada
    printf("Este programa converte polegadas em cm.\n");
    printf("Informe a medida em polegadas: ");
    scanf("%f", &pol);
    
    //Processamento
    cm = pol * 2.54;
    
    //Saída
    printf("%.2f\" equivalem a, aproximadamente, %.2f cm.", pol, cm);
}
