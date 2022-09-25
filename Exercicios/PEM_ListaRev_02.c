/******************************************************************************

2. Dado um número natural na base binária, transformá-lo para a base decimal.

Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18.

*******************************************************************************/

#include <stdio.h>

int main(){	
    //VARIÁVEIS
    int bin, digito, mult=1, dec=0;
    
    //PROGRAMA
    printf("Informe um número na base binária: ");
    scanf("%d",&bin);
    
    while(bin>0){
        digito=bin%2;
        bin=bin/10;
        dec=dec+digito*mult;
        
        
        //printf("%d = %d\n",digito,digito*mult);
        mult=mult*2;
        
    }
    
    printf("\nBase decimal = %d",dec);
    
	return 0;
}

