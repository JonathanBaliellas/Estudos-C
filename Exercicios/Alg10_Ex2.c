/******************************************************************************

2– Crie um programa que armazene em uma matriz 10×3 em cada uma das colunas 
armazene o tamanho de uma aresta de um triangulo, ao final exiba o percentual 
de triângulos isoceles, equiláteros e escalenos

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lado[10][3];
    float triangIsoPerc=0, triangEquiPerc=0, triangEscPerc=0;
    
    printf("Informe as medidas dos lados de 10 triângulos\n\n");
    
    for(int i=0;i<10;i++){
        printf("Informe os lados a, b e c do triângulo %i:\n",i+1);
        scanf("%i %i %i", &lado[i][0],&lado[i][1],&lado[i][2]);
        
        if((lado[i][0] == lado[i][1]) && (lado[i][0] == lado[i][2])){
            triangEquiPerc++;
        }else if((lado[i][0] == lado[i][1]) || (lado[i][0] == lado[i][2]) || 
        (lado[i][1] == lado[i][2])){
            triangIsoPerc++;
        }else{
            triangEscPerc++;
        }
    }
    
    printf("\n\n%.1f%% são triângulos equiláteros;\n",(triangEquiPerc/10)*100);
    printf("%.1f%% são triângulos isósceles;\n",(triangIsoPerc/10)*100);
    printf("%.1f%% são triângulos escalenos;",(triangEscPerc/10)*100);
}
