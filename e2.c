#include <stdio.h>

int main(void){
  float valor1, valor2, valor3;
  valor1 = 1.342524;
  valor2 = 524.3452345;
  valor3 = 354.456;

  printf("Valores com até 2 casas decimais: \n");
  printf("Valor 1: %.2f\nValor 2: %.2f\nValor 3: %.2f\n", valor1, valor2, valor3);
  printf("Valores com até 3 casas decimais:\n");
  printf("valor 1: %.3f\nValor 2: %.3f\nValor 3: %.3f\n", valor1, valor2, valor3);

  return 0;
 }
