/******************************************************************************

9- Crie um algoritmo onde será informado um valor inteiro inicial, e um laço 
o usuário devera informar outro numero inteiro, o programa deverá responder se 
o numero atual e menor ou maior que o numero inicial informado, o laço somente 
será interrompido quando o numero atual for igual ao número anterior informado. 
Exiba quantas tentativas foram necessárias para que o numero fosse descoberto.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){    
    //VARIÁVEIS
    int palpite, aleat, tentativas=0;
    
    //INÍCIO
    printf("Gerando um valor aleatório entre 0 e 100...\n");
    srand(time(NULL));
    aleat = rand() % 100;

    printf("Tente adivinhar qual é\n\n");
    
    do{
        scanf("%i",&palpite);
        
        if(palpite < aleat){
            printf("Seu palpite é menor que o valor alvo!\nTente novamente\n");
        }else if(palpite > aleat){
            printf("Seu palpite é maior que o valor alvo!\nTente novamente\n");
        }
        
        tentativas++;
    }while(palpite != aleat);
    
    printf("VOCÊ ACERTOU!!\n\nO VALOR ALVO É %i\n",aleat);
    printf("Foram necessárias %i tentativas para acertar!", tentativas);
  
    getch();
}