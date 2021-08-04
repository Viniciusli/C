#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
  unsigned short i = 0; // pra contadores use unsigned e evite bugs :)
  // unsigned short i = 0; irá poupar memória caso sua máquina seja fraca
  
 
  /*imprimir:
    printf("O valor de i é: %u\n", i);
    i++;
    if (i < 3)
      goto imprimir;
    essa estrutura é pouco usual
  */

  for (; i < 3; i++){ // você pode declarar o i no for, assim vc poupa memória
    //porém, é um recurso novo no c, por isso ao compilar em versoes antigas
    //fazer: gcc -std=c11 -o loop loop.c
    //OBS: declarando i no for ele só existe nesse bloco
    printf("O valor de i é: %u\n", i);
  }

  while (i < 3){
    //while (1) para verdadeiro
    //while (true) com stdbool.h
    printf("Valor de i: %u\n", i);
    i++;
  }

  do 
    printf("Valor de i: %u", i);
  while (i < 3);

  return 0;
}
