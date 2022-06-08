/******************************************************************************

1- Crie um programa que controle uma lista de inscritos em um vestibular, 
armazene em uma matriz 10x3 os seguintes dados: primeira coluna : cpf do 
inscrito , segunda coluna: idade do inscrito, terceira coluna: curso escolhido 
1-ADS 2-GECOM 3-Eventos 4-RH

somente insira a linha da matriz caso o CPF não tenha sido cadastrado anteriormente
Exiba ao  final a quantidade de inscritos de cada curso
Mostre a media de idade dos inscritos
Caso ja exista um cpf, mostre a mensagem CPF ja cadastrado registro não inserido

*******************************************************************************/

#include <stdio.h>

int main()
{
    int inscritos[10][3], cursos[4]={0,0,0,0};
    float mediaIdade=0;
    
    printf("Inscrição para o vestibular\n\n");
    for(int i=0;i<10;i++){
        cpf:
        printf("\nCANDIDATO %i\n",i+1);
        printf("Informe o CPF: ");
        scanf("%i",&inscritos[i][0]);
        for(int j=0;j<i;j++){
           if(inscritos[i][0]==inscritos[j][0]){
               printf("CANDIDATO JÁ CADASTRADO!!\nPOR FAVOR, INSIRA OUTRO CANDIDATO\n");
               goto cpf;
           }
        }
        printf("Informe a idade: ");
        scanf("%i",&inscritos[i][1]);
        mediaIdade += inscritos[i][1];
        do{
            printf("Informe o curso (1-ADS; 2-GECOM; 3-Eventos; 4-RH): ");
            scanf("%i",&inscritos[i][2]);
            if(inscritos[i][2]<1 || inscritos[i][2]>4){
                printf("CURSO INVÁLIDO!\n\n");
            }else{
                switch(inscritos[i][2]){
                    case 1:{
                        cursos[0]++;
                        break;
                    }
                    case 2:{
                        cursos[1]++;
                        break;
                    }
                    case 3:{
                        cursos[2]++;
                        break;
                    }
                    case 4:{
                        cursos[3]++;
                        break;
                    }
                }
            }
        }while(inscritos[i][2]<1 || inscritos[i][2]>4);
        
    }
    printf("\n==================================\n");
    printf("TOTAIS DE INSCRITOS\n");
    printf("1-ADS: %i\n", cursos[0]);
    printf("2-GECOM: %i\n", cursos[1]);
    printf("3-Eventos: %i\n", cursos[2]);
    printf("4-RH: %i\n", cursos[3]);
    printf("\nIDADE MÉDIA DOS CANDIDATOS: %.1f", mediaIdade/10);
}
