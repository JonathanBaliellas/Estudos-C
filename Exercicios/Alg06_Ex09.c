/******************************************************************************

9-Desenvolva um programa em C que: Leia 4 (quatro) números; Calcule o quadrado 
de cada um; Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o 
e finalize; Caso contrário, imprima os valores lidos e seus respectivos quadrados.

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int n1, n2, n3, n4, q1, q2, q3, q4;
    
    //INÍCIO
    
    
    //Entrada
    printf("Informe 4 números:\n");
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);
    
    //Processamento/Saída
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;
    
    printf("----------------------\n");
    if(q3 > 1000){
        printf("O quadrado do número %i é %i.", n3, q3);
    }else{
        printf("%i² = %i.\n", n1, q1);
        printf("%i² = %i.\n", n2, q2);
        printf("%i² = %i.\n", n3, q3);
        printf("%i² = %i.\n", n4, q4);
    }
}
