/******************************************************************************

11-Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os 
dois numeros forem iguais, imprima a mensagem Numeros iguais.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int n1, n2;
    
    //INÍCIO
    printf("Este compara dois números e determina qual é o maior.\n");
    
    //Entrada
    printf("Informe dois números inteiros para comparação:\n");
    scanf("%i %i", &n1, &n2);
    
    //Processamento
    if(n1 > n2){
        printf("%i é maior que %i.",n1,n2);
    }else if(n1 < n2){
        printf("%i é menor que %i", n1,n2);
    }else{
        printf("Os dois números são iguais.");
    }
}
