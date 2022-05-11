/******************************************************************************

2- Dado o algoritmo abaixo escrito em C :

int x = 10; 
while(x>0) { 
 prinf("%d",x);
 x--; 
}
a- reescreva com o laço faça até (for)

b- reescreva com o laço faça enquanto (do while)

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int x = 10;
    
    //INÍCIO
    do{ 
        printf("%d ",x);
        x--; 
    }while(x>0);
}
