#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool b;
  char c;
  c = 0; // false
  c = 1; // true

  b = true;
  printf("Tamanho de b: %lu\n", sizeof b);

  return 0;
}
