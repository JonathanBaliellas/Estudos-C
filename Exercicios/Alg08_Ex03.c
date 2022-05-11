/******************************************************************************

3- Faça um laço que calcule a media de todos os números informados, a condição 
de termino do laço e quando for digitado ZERO

*******************************************************************************/

#include <stdio.h>

int main(){
    //VARIÁVEIS
    double num, cont, media;
    
    //INÍCIO
    printf("Este programa calculará a média de todos os valores informados.\n");
    
    do{
        printf("Digite um número (0 para parar): ");
        scanf("%le",&num);
        media += num;
        cont++;
    }while(num != 0);
    
    media = media/(cont - 1);
    printf("A média é %.1f", media);
}
