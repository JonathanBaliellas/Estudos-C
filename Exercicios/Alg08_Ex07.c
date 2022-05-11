/******************************************************************************

7 -  Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria 
qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o 
pagamento, se poderia ser feito com grãos de trigo dispostos em um tabuleiro de 
64 casas, de tal forma que o primeiro quadro deveria conter apenas um grão e os 
quadros subsequentes, o dobro do quadro anterior. A rainha achou o trabalho 
barato e pediu que o serviço fosse executado, sem se dar conta de que seria 
impossível efetuar o pagamento. Faça um algoritmo para calcular o número de 
grãos que o monge esperava receber.

100.000 graos = 1kg

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    double graos=1;
    
    //INÍCIO
    for(int i=2;i<=64;i++){
        graos = graos * 2;
    }
    
    printf("O monge esperava receber %.0f grãos (%.0f kg)", graos,graos/100000);
}