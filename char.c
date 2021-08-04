#include <stdio.h>

int main(void){
  char c;
  
  printf("O tamanho de c é: %lu bytes e %lu bits\n", sizeof c, sizeof c*8);
  
  c = 255; // converção implícita / 256: overflow / 255: -1
  printf("O valor de c: %i\n", c);

  return 0;
 }
