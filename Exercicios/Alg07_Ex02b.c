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
    int x;
    
    printf("Números ímpares entre 100 e 200\n");
    
    for (x = 101; x <= 200; x += 2){
        printf("%i ", x);
    }
}
