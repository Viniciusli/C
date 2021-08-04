#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>

int main(void){
  register i = 0; // coloca a variável num registrador, invés de na memória ram, usado em contagem de loops
  // int (signed int, não precisa colocar o signed) %d %i, de preferencia o %d
  // unsigned int %u (OBS: o %d é signed)
  // uint32_t garante que a variável tenha 32 bits
  // uint16_t
  // uint8_t (OBS: equivale a um char)
  // short int
  // short (mais usual que short int)
  // long int %lu
  // long (ao inves de long int)
  // long long int %llu
  // unsigned long long int %llu

  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i*8);
  printf("Valor de i: %llu\n", i);

  return 0;
}
