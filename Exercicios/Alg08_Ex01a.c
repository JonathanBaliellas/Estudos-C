/******************************************************************************

1- Dado o algoritmo abaixo escrito em C :

int i, a, b; 
for(i=0; i<20; i++) { 
 scanf("%d",&a); 
 scanf("%d",&b); 
 r = a + b; 
 printf("%d\n", r); 
}
a- reescreva com o laço enquanto faça (while)

b- reescreva com o laço faça enquanto (do while)

*******************************************************************************/

#include <stdio.h>

int main()
{
    //VARIÁVEIS
    int i=0, a, b, r;
    
    //INÍCIO
    while(i<20){
        printf("%dª soma:\n",i+1);
        scanf("%d",&a);
        scanf("%d",&b);
        
        r = a + b;
        
        printf("%d\n",r);
        i++;
    }
}