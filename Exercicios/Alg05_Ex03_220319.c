/******************************************************************************

Aula 5 de Algoritmos
19.3.2022

3. A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 
grupos de indústrias que são altamente poluentes do meio ambiente. O índice de 
poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as 
indústrias do 1º grupo são intimadas a suspenderem suas atividades, se o índice 
crescer para 0,4 as industrias do 1º e 2º grupo são intimadas a suspenderem 
suas atividades, se o índice atingir 0,5 todos os grupos devem ser notificados 
a paralisarem suas atividades. Faça um algoritmo em C que leia o índice de 
poluição medido e emita a notificação adequada aos diferentes grupos de empresas.

Aluno: Jonathan Baliellas

*******************************************************************************/

#include <stdio.h>

int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    float indicePoluicao;
    
    //INÍCIO
    //Entrada
    printf("Informe o índice de poluição coletado: ");
    scanf("%f", &indicePoluicao);
    
    //Processamento/Saída
    if (indicePoluicao < 0.3){
        printf("O índice de poluição está dentro do aceitável.");
    } else if (indicePoluicao < 0.4){ //Índice entre 0,3 e 0,39
        printf("Intimar as empresas do 1º grupo a suspenderem suas atividades.");
    } else if (indicePoluicao < 0.5){ //Índice entre 0,4 e 0,49
        printf("Intimar as empresas do 1º e 2º grupo a suspenderem suas atividades");
    } else {
        printf("Notificar todas as empresas a paralisarem suas atividades.");
    }
}
