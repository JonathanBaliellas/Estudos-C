/******************************************************************************

A – Faça um algoritmo que implemente um laço que leia X números inteiros e 
identifique qual o menor o maior e a media, quando o número informado for zero, 
interrompa o laço e exiba os valores.

B – Elabore um algoritmo que gere e escreva os números ímpares dos números entre 
100 e 200.

C- Faça um algoritmo que dado valor inteiro informado, calcule e exiba a tabuada 
do numero de 1 a 10

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x, i;
    
    printf("Informe um número para calcular a tabuada: ");
    scanf("%i", &x);
    
    for (i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", x, i, x*i);
    }
}
