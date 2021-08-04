#include <stdio.h>
#include <stdlib.h>
// DEFININDO MACROS
#define SIZE 25
#define QUAD(x) ((x)*(x))

int main(void){
  char buff[SIZE] = { '\0' };

  printf("Digite algo: ");
  scanf("%s", buff);

  printf("Vc digitou: %s\n", buff);

  printf("O quadrado de %d é: %d\n",8 ,QUAD(8));

  return 0;

 }

