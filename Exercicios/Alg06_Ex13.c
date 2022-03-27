/******************************************************************************

13-Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um 
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) – 58
Para mulheres: (62.1*h) – 44.7 (h = altura)

Data: 26.3.22

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    float alt;
    int sexo;
    
    //INÍCIO
    printf("Este programa calcula o peso ideal de uma pessoa.\n");
    
    //Entrada
    printf("Informe a altura (kg): ");
    scanf("%f", &alt);
    
    repSexo:
    printf("Informe o sexo (1-Masculino; 2-Feminino): ");
    scanf("%i", &sexo);
    
    //Processamento
    if(sexo < 1 && sexo > 2){
        printf("ERRO: Você inseriu um valor inválido para sexo.\n \n");
        goto repSexo;
    }
    
    if(sexo == 1){
        alt = (72.7 * alt) - 58;
        printf("O peso ideal desse homem é de %.2f kg.", alt);
    }else{
        alt = (62.1 * alt) - 44.7;
        printf("O peso ideal dessa mulher é de %.2f kg.", alt);
    }
}
