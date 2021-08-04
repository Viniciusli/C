#include <stdio.h>

int i = 10; // variavel global

int main(void) {
  printf("%d\n", i);
  inc_i();
  printf("%d\n", i);
  return 0;
} 
