/******************************************************************************

1. Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no 
semestre, calcule a media das notas e o percentual de faltas sobre 20 aulas.
Caso o percentual de faltas for maior que 30% o aluno esta automaticamente 
reprovado, caso ao contrario verifique se a media e maior igual a 6,  se 
afirmativo o aluno esta aprovado, senão informe uma nota P3 para recalcular a 
media, se a nova media for maior igual a 6, escreva aprovado no exame, caso 
negativo exiba reprovado por nota.

Aluno: Jonathan Baliellas

*******************************************************************************/

#include <stdio.h>

int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    float p1, p2, p3, media;
    int faltas;
    
    //INÍCIO
    //Entrada
    refazP1:
    printf("Informe a nota da P1: ");
    scanf("%f", &p1);
    if(p1 > 10 || p1 < 0){
        printf("Você informou uma nota inválida!\n");
        goto refazP1;
    }
    
    refazP2:
    printf("Informe a nota da P2: ");
    scanf("%f", &p2);
    if(p2 > 10 || p2 < 0){
        printf("Você informou uma nota inválida!\n");
        goto refazP2;
    }
    
    refazFaltas:
    printf("Informe o número de faltas: ");
    scanf("%i", &faltas);
    if(faltas > 20 || faltas < 0){
        printf("Você informou um número inválido!\n");
        goto refazFaltas;
    }
    
    //Processamento/Saída
    if(faltas > 20 * 0.3){
        printf("O aluno está reprovado por falta.");
    } else {
        media = (p1 + p2) / 2;
        if (media >= 6){
            goto aprovado;
        } else {
            printf("A média do aluno é %.1f. O aluno deverá realizar a P3.\n", media);
            
            refazP3:
            printf("Informe a nota da P3: ");
            scanf("%f", &p3);
            if(p3 > 10 || p3 < 0){
                printf("Você informou uma nota inválida!\n");
                goto refazP3;
            }
            
            media = (p1 + p2 + p3) / 3;
            if (media >= 6){
                aprovado:
                printf("APROVADO!\nA média do aluno é %.1f.", media);
            } else {
                printf("REPROVADO!\nA média do aluno é %.1f.\n", media);
                printf("O aluno não atingiu a nota mínima para aprovação.");
            }
        }
    }
}