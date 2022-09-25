/******************************************************************************

3. Dado um número natural na base decimal, transformá-lo para a base binária.

Exemplo: Dado 18 a saída deverá ser 10010.

*******************************************************************************/

#include <stdio.h>

int main(){	
    //VARIÁVEIS
    int dec, mult=1, bin=0;
    
    //PROGRAMA
    printf("Informe um número na base decimal: ");
    scanf("%d",&dec);
    
    while(dec>0){
        bin=bin+((dec%2)*mult);
        dec=dec/2;
        mult=mult*10;
    }
    
    printf("%d",bin);

	return 0;
}

