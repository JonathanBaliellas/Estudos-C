/******************************************************************************

6- Crie um laço e verifique qual a maior sequencia de números pares informados, 
o laço fara 10 iterações.

Exe: 1,2,3,4,6,8,5,3,2,5,8,4,0
Sequencia :4,6,8
O programa vai retornar: 3

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int num, sequenciaPar=0, maiorSequencia=0;
    
    //INÍCIO
    printf("Este programa verificará a maior sequência de números pares\n");
    printf("-----------------------------------------------------------\n");
    
    for(int i=1;i<=10;i++){
        printf("Número %i: ",i);
        scanf("%i",&num);
        
        if(num % 2 == 0){
            sequenciaPar++;
        }else{
            sequenciaPar=0;
        }
        
        if(sequenciaPar > maiorSequencia){
            maiorSequencia = sequenciaPar;
        }
    }
    
    if(maiorSequencia == 1){
        maiorSequencia=0;
    }
    
    printf("A maior sequência de números pares foi: %i",maiorSequencia);
}