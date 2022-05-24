/******************************************************************************

a- Faça um algoritmo que armazene um vetor de inteiros de 20 posições, 
identifique  o percentual de números impares e de números pares informados.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[20]; 
    float par=0;
    
    printf("Informe 20 números e diremos o percentual de números ímpares e pares\n");
    printf("--------------------------------------------------------------------\n");
    for(int i=0;i<20;i++){
        printf("Informe o %iº número: ",i+1);
        scanf("%i",&num[i]);
        if(num[i]%2==0){
            par++;
        }
    }
    
    printf("%.1f%% dos números são pares e %.1f%% são ímpares.",(par/20)*100,((20-par)/20)*100);
}
