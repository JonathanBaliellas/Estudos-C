/******************************************************************************

8-Elabore um programa em C que leia as variáveis C e N, respectivamente código 
e número de horas trabalhadas de um operário. E calcule o salário sabendo-se 
que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule 
o excesso de pagamento armazenando-o na variável E, caso contrário zerar tal 
variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento 
imprimir o salário total e o salário excedente

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int C;
    float N, E=0;
    
    //INÍCIO
    printf("Este programa calcula o salário de um operário de acordo com o\n");
    printf("número de horas trabalhadas, bem como horas extras.\n");
    
    //Entrada
    printf("Informe o código do operário: ");
    scanf("%i", &C);
    printf("Agora informe o número de horas trabalhadas: ");
    scanf("%f", &N);
    
    //Processamento
    if (N > 50){
        E = N - 50;
        N = N - E;
    }
    
    N = N * 10;
    E = E * 20;
    
    //Saída
    printf("O operário %i receberá R$ %.2f e um adicional de R$ %.2f de horas extras", C, N, E);
}
