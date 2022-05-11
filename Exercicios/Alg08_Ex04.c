/******************************************************************************

4- faça um laço "faça até" com 10 interações, verifique quantas vezes números 
múltiplos de 2 e de 3 são informados

*******************************************************************************/

#include <stdio.h>

int main(){
    //VARIÁVEIS
    int num, m2=0, m3=0;
    
    //INÍCIO
    printf("Digite 10 números inteiros:\n");
    for(int i=1; i<=10; i++){
        printf("Número %i: ",i);
        scanf("%i",&num);
        
        if(num % 2 == 0){
            m2++;
        }
        
        if(num % 3 == 0){
            m3++;
        }
    }
    
    printf("Você informou %i múltiplos de 2 e %i múltiplos de 3.", m2, m3);
}
