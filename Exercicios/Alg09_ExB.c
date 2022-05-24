/******************************************************************************

b-Crie dois vetores do tipo inteiro com a capacidade de 10 posições, leia 
números que serão armazenados sequencialmente no primeiro vetor, faça um novo 
laço que armazene no segundo vetor o valor do primeiro multiplicado por 2 
quando o índice for par, e multiplique por 3 quando o índice for impar.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[10], dobroTriplo[10];
    
    printf("Informe 10 números para cálculo...\n\n");
    for(int i=0;i<10;i++){
        printf("Informe o %iº número: ", i+1);
        scanf("%i",&num[i]);
    }
    
    printf("\n");
    
    for(int i=0;i<10;i++){
        if(i%2==0){
            printf("%i x 2 = %i\n",num[i], num[i]*2);
        }else{
            printf("%i x 3 = %i\n",num[i], num[i]*3);
        }
    }
}
