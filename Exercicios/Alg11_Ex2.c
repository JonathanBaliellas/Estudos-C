/******************************************************************************

2-Crie uma tabela de um campeonato de futebol, com 10 times e 4 colunas

Na coluna 0 e o total de vitorias (multiplique por 3 pontos)
Na coluna 1 o total de empates (multiplique por 1 ponto)
Na coluna 2 o total de derrotas (multiplique por 0 pontos)
Na coluna 3 , calcule o total de pontos
Mostre ao final, o três primeiros colocados da tabela

*******************************************************************************/

#include <stdio.h>

int main()
{
    int pontos[10][4], classificacao[3]={0,0,0}, classificPontos[3]={0,0,0};
    
    for(int i=0;i<10;i++){
        printf("\nTIME %i\n", i+1);
        printf("Informe o número de vitórias: ");
        scanf("%i",&pontos[i][0]);
        printf("Informe o número de empates: ");
        scanf("%i",&pontos[i][1]);
        printf("Informe o número de derrotas: ");
        scanf("%i",&pontos[i][2]);
        
        pontos[i][3] = pontos[i][0]*3;
        pontos[i][3] += pontos[i][1];
        printf("Pontos: %i\n",pontos[i][3]);
        if(pontos[i][3]>classificPontos[0]){
            classificacao[2] = classificacao[1];
            classificacao[1] = classificacao[0];
            classificacao[0] = i+1;
            
            classificPontos[2] = classificPontos[1];
            classificPontos[1] = classificPontos[0];
            classificPontos[0] = pontos[i][3];
        }else if(pontos[i][3]>classificPontos[1]){
            classificacao[2] = classificacao[1];
            classificacao[1] = i+1;
            
            classificPontos[2] = classificPontos[1];
            classificPontos[1] = pontos[i][3];
        }else if(pontos[i][3]>classificPontos[2]){
            classificacao[2] = i+1;
            classificPontos[2] = pontos[i][3];
        }
    }
    
    printf("\nOs três primeiros colocados são:\n");
    for(int i=0;i<3;i++){
        printf("Time %i\n", classificacao[i]);
    }
}
