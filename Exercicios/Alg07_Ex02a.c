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
    //VARIÁVEIS
    int x, maior, menor, soma = 0, cont = 0;
    float media = 0;
    
    //INÍCIO
    do{
        printf("\nInforme um número inteiro (0-parar): ");
        scanf("%i", &x);
        
        if (x != 0){
            if(cont == 0){
                maior = x;
                menor = x;
            }else{
                if(x > maior){
                    maior = x;
                }
                
                if(x < menor){
                    menor = x;
                }
            }
            
            media += x;
            cont++;   
        }
        
        printf("Maior número: %i\n", maior);
        printf("Menor número: %i\n", menor);
        printf("Média: %.2f\n", media/cont);
    } while(x != 0);
}
