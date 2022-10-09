/******************************************************************************

6. Dados dois números naturais m e n e duas sequências ordenadas com m e n números 
inteiros, obter uma única sequência ordenada contendo todos os elementos das 
sequências originais sem repetição.

Sugestão: Imagine uma situação real, por exemplo, dois fichários de uma biblioteca.

Exemplo: 
Sequência 1:  1, 1, 2, 3, 4, 8, 9
Sequência 2:  1, 3, 5, 7, 10
Sequência gerada: 1, 1, 1, 2, 3, 3, 4, 5, 7, 8, 9, 10  (+ fácil)
Sequência gerada (sem repetição): 1, 2, 3, 4, 5, 7, 8, 9, 10

*******************************************************************************/

#include <stdio.h>

int main()
{
    int seq1[7]={1,1,2,3,4,8,9}, seq2[5]={1,3,5,7,10}, seqOrdenada1[12],
        seqOrdenada2[9], contSeq1=0, contSeq2=0;
    
    //SEQUÊNCIA ORDENADA 1
    for(int i=0;i<12;i++){
        if(seq1[contSeq1]<seq2[contSeq2]){
            seqOrdenada1[i]=seq1[contSeq1];
            contSeq1++;
        }else{
            seqOrdenada1[i]=seq2[contSeq2];
            contSeq2++;
        }
    }
    
    printf("Sequência Ordenada 1: ");
    
    for(int i=0;i<12;i++){
        printf("%d, ",seqOrdenada1[i]);    
    }
    
    //SEQUÊNCIA ORDENADA 2
    contSeq1=0;
    contSeq2=0;
    
    for(int i=0;i<9;i++){
        Restart:
        if(seq1[contSeq1]<seq2[contSeq2]){
            if(seq1[contSeq1]!=seqOrdenada2[i-1]) seqOrdenada2[i]=seq1[contSeq1];
            else{
                contSeq1++;
                goto Restart;  
            }
            contSeq1++;
        }else{
            if(seq2[contSeq2]!=seqOrdenada2[i-1]) seqOrdenada2[i]=seq2[contSeq2];
            else{
                contSeq2++;
                goto Restart;
            }
            contSeq2++;
        }
    }
    
    printf("\nSequência Ordenada 2: ");
    for(int i=0;i<9;i++){
        printf("%d, ",seqOrdenada2[i]);
    }
}
