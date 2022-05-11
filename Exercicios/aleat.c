/******************************************************************************

9- Crie um algoritmo onde será informado um valor inteiro inicial, e um laço 
o usuário devera informar outro numero inteiro, o programa deverá responder se 
o numero atual e menor ou maior que o numero inicial informado, o laço somente 
será interrompido quando o numero atual for igual ao número anterior informado. 
Exiba quantas tentativas foram necessárias para que o numero fosse descoberto.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int i;
  
  printf("Gerando 10 valores aleatorios:\n\n");
  
  for (i = 0; i < 10; i++)
  {
    /* gerando valores aleatórios entre zero e 100 */
    printf("%d ", rand() % 100);
  }
  
  getch();
  return 0;
}