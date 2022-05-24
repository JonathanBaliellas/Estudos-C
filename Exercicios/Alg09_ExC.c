/******************************************************************************

c – faça um algoritmo que implemente um vetor de 20 posições, leia as 20 
posições e identifique em um novo laço, qual o maior e menor numero informado 
e qual a media dos números informados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[20], maior, menor;
    float media=0;
    
    printf("Informe 20 números.\nEste programa verificará qual o maior e menor número informados e a média.\n\n");
    
    for(int i=0;i<20;i++){
        printf("Informe o %iº número: ",i+1);
        scanf("%i",&num[i]);
        
        if(i==0){
            maior = num[i];
            menor = num[i];
        }else{
            if(num[i] > maior){
                maior = num[i];
            }
                
            if(num[i] < menor){
                menor = num[i];
            }
        }
        
        media = media + num[i];
    }
    
    printf("O maior número informado foi: %i\n", maior);
    printf("O menor número informado foi: %i\n", menor);
    printf("A média dos números é: %.1f", media/20);
}
