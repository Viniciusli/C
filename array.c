#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>

int main(void){
  char c[3];

  printf("Tamanho de c(array): %zu bytes / %zu bits\n", sizeof c, sizeof c*8);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("C em memória: %p\n", c);
  printf("&c em memória: %p\n", &c);
  printf("O primeiro elemento de c em memória: %p\n", &c[0]);
  printf("O segundo elemento de c em memória: %p\n", &c[1]);
  return 0;
}
