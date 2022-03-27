/******************************************************************************

Aula 5 de Algoritmos
19.3.2022

4. Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das 
seguintes categorias:
    - Infantil A = 5 a 7 anos
    - Infantil B = 8 a 11 anos
    - Juvenil A = 12 a 13 anos
    - Juvenil B = 14 a 17 anos
    - Adultos = Maiores de 18 anos

Aluno: Jonathan Baliellas

*******************************************************************************/

#include <stdio.h>

int main()
{
    //DECLARAÇÃO DE VARIÁVEIS
    int idade;
    
    //INÍCIO
    //Entrada
    entrada:
    printf("Informe a idade do nadador: ");
    scanf("%i", &idade);
    
    //Validação de dados
    if (idade < 0){
        printf("A idade informada é inválida!\n");
        goto entrada;
    }
    
    //Processamento/Saída
    if (idade < 5){
        printf("Com %i anos, a criança ainda não pode competir.", idade);
    } else if (idade <= 7){
        printf("Com %i anos, o nadador entrará na categoria Infantil A.", idade);
    } else if (idade <= 11){
        printf("Com %i anos, o nadador entrará na categoria Infantil B.", idade);
    } else if (idade <= 13){
        printf("Com %i anos, o nadador entrará na categoria Juvenil A.", idade);
    } else if (idade <= 17){
        printf("Com %i anos, o nadador entrará na categoria Juvenil B.", idade);
    } else {
        printf("Com %i anos, o nadador entrará na categoria Adultos", idade);
    }
}
