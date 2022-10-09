/******************************************************************************

8. Imprimir as n primeiras linhas do triângulo de Pascal. Você pode fazer com 
uma matriz ou mesmo utilizando um único vetor.

Dicas:
a) a primeira coluna sempre contém 1.
b) o último elemento de cada linha sempre é 1.
c) todos os outros elementos podem ser calculados somando-se o de cima com o de 
cima à esquerda.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int grandeza;
    
    printf("Qual a grandeza da matriz? ");
    scanf("%d",&grandeza);
    
    int matriz[grandeza][grandeza];
    
    //Imprimir matriz
    for(int i=0;i<grandeza;i++){
        for(int j=0;j<grandeza;j++){
            if(i==j) matriz[i][j]=1;
            else if(i<j) matriz[i][j]=0;
            else if(j==0) matriz[i][j]=1;
            else matriz[i][j]=matriz[i-1][j]+matriz[i-1][j-1];
            
            if(matriz[i][j]!=0) printf("%4d ",matriz[i][j]);
        }
        
        printf("\n");
    }
}
