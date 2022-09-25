/******************************************************************************

4. Dados n e uma sequência de n números inteiros, determinar quantos segmentos 
de números iguais consecutivos compõem essa sequência.

Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 5, 2, 2, 3, 4, 4, 4, 4, 1, 1
Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>> 
Portanto, tenho 5 grupos.

*******************************************************************************/

#include <stdio.h>

int main(){	
    //VARIÁVEIS
    int grupos=0, n;
    
    //PROGRAMA
    printf("Quantos números serão digitados? ");
    scanf("%d",&n);
    
    int vet[n];
    
    for(int i=0;i<n;i++){
        if(i!=n-1) printf("Informe o %dº número: ",i+1);
        else printf("Informe o último número: ");
        
        scanf("%d",&vet[i]);
        if(vet[i]!=vet[i-1]) grupos++;
    }
    
    printf("Tenho %d grupos.",grupos);

	return 0;
}

