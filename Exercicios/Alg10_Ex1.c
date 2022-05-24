/******************************************************************************

1– Construa um programa em C que utiliza uma matriz 10×3 que armazene as 
temperaturas máxima e minima do dia, assim como a media de temperatura na 
ultima coluna.  Crie um menu de escolha que ofereça as seguintes informações:

    a. temperatura minima de todos os dias.
    b. temperatura máxima de todos os dias.
    c. maior variação de temperatura de todos os dias.
    d. Sair do programa.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float temp[10][3], tempMaxMinVar[2];
    int opt;
    
    printf("Este programa coletará as temperaturas máxima e mínima de 10 dias\n\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                printf("Insira as temperaturas máxima do dia %i: ", i+1);    
            }else{
                printf("Insira as temperaturas mínima do dia %i: ", i+1);
            }
            scanf("%f",&temp[i][j]);
        }
        if(temp[i][0] < temp[i][1]){//temp{[0=maior];[1=menor];[2=média]}
            temp[i][2] = temp[i][1];
            temp[i][1] = temp[i][0];
            temp[i][0] = temp[i][2];
        }
        temp[i][2]=(temp[i][0]+temp[i][1])/2;
    }
    
    do{
        printf("\n\nMENU\n\n");
        printf("1. Temperatura mínima de todos os dias\n");
        printf("2. Temperatura máxima de todos os dias\n");
        printf("3. Maior variação de temperatura de todos os dias\n");
        printf("4. Sair do programa\n\n");
        printf("Digite a opção: ");
        scanf("%i",&opt);
        
        if(opt==1){//opção 1: mínimas
            tempMaxMinVar[0] = temp[0][1];
            tempMaxMinVar[1] = 1;
            for(int i=0;i<10;i++){
                printf("\nTemperatura mínima do dia %i: %.1f°C",i+1,temp[i][1]);
                if(temp[i][1]<tempMaxMinVar[0]){
                    tempMaxMinVar[0] = temp[i][1];
                    tempMaxMinVar[1] = i+1;
                }
            }
            printf("\n\nA menor temperatura do período foi: %.1f°C (dia %.0f)",tempMaxMinVar[0],tempMaxMinVar[1]);
        }else if(opt==2){//opção 2: máximas
            tempMaxMinVar[0] = temp[0][0];
            tempMaxMinVar[1] = 1;
            for(int i=0;i<10;i++){
                printf("\nTemperatura máxima do dia %i: %.1f°C",i+1,temp[i][0]);
                if(temp[i][0]>tempMaxMinVar[0]){
                    tempMaxMinVar[0] = temp[i][0];
                    tempMaxMinVar[1] = i+1;
                }
            }
            printf("\n\nA maior temperatura do período foi: %.1f°C (dia %.0f)",tempMaxMinVar[0],tempMaxMinVar[1]);
        }else if(opt==3){//opção 3: variação
            tempMaxMinVar[0] = temp[0][0]-temp[0][1];
            tempMaxMinVar[1] = 1;
            for(int i=0;i<10;i++){
                printf("\nVariação de temperatura do dia %i: %.1f°C",i+1,temp[i][0]-temp[i][1]);
                if((temp[i][0]-temp[i][1])>tempMaxMinVar[0]){
                    tempMaxMinVar[0] = temp[i][0]-temp[i][1];
                    tempMaxMinVar[1] = i+1;
                }
            }
            printf("\n\nA maior variação de temperatura do período foi: %.1f°C (dia %.0f)",tempMaxMinVar[0],tempMaxMinVar[1]);
        }
    }while(opt!=4);
}
