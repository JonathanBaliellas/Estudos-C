/******************************************************************************

7. Dadas duas sequências com n números inteiros entre 0 e 9, interpretadas como 
dois números inteiros de n algarismos, calcular a sequência de números que 
representa a soma dos dois inteiros.

Exemplo: n = 8,
		1ª sequência		8 2 4 3 4 2 5 1
		2ª sequência		3 3 7 5 2 3 3 7  +
					     -----------------------
					      1 1 6 1 8 6 5 8 8

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1[8]={8, 2, 4, 3, 4, 2, 5, 1}, n2[8]={3, 3, 7, 5, 2, 3, 3, 7},soma[9];
    
    printf("Vamos somar os números dos vetores:\n  ");
    for(int i=0;i<8;i++){
        printf("%d",n1[i]);
    }
    
    printf("\n+ ");
    for(int i=0;i<8;i++){
        printf("%d",n2[i]);
    }
    
    printf("\n ---------\n ");
    
    for(int i=8;i>=0;i--){
        soma[i+1]=n1[i]+n2[i];
        if(soma[i+1]>=10){
            if(i==0) soma[i]=1;
            soma[i+1]=soma[i+1]-10;
            n1[i-1]=n1[i-1]+1;
        }
    }
    
    for(int i=0;i<9;i++){
        printf("%d",soma[i]);
    }
}
