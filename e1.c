#include <stdio.h>

int main(void){
  int valor1, valor2, valor3;
  valor1 = 10;
  valor2 = 20;
  valor3 = 30;
  
  printf("Mostrando valores um a um:\n");
  printf("valor 1: %d\n", valor1);
  printf("valor 2: %d\n", valor2);
  printf("valor 3: %d\n", valor3);
  
  printf("Mostrando valores no mesmo printf()\n");
  printf("Valor 1: %d\nValor 2: %d\nValor 3: %d\n", valor1, valor2, valor3);

  return 0;
 }
