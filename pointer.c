#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
  int a[] = { 2017, 2018, 2019 };
  int i = 2021;
  int *p; // declarando um ponteiro
  char s[] = "vinicius";
  char *t = "vinicius";
  /*
  for (unsigned short i = 0; i < 3; i++){
    printf("%d\n", a[i]);
  }
  printf("O endereço de memória de a é: %p\n", a);

  printf("%d\n", *a); // *a recupera o que tem no endereço de memória (neste caso é imprimido 2017)
  printf("%d\n", *(a + 1)); // neste caso é impresso 2018 OBS: *a + 1 != *(a + 1)
  // o correto é *(a+1) pois assim vc está pegando o proximo elemento
  // *a + 1 pega o primeiro elemento e soma com 1 
  for (unsigned short i = 0; i < 3; i++){
    printf("%d\n", *a + i);
  }
*/
  p = &i; // aponta para o endereço de i
  printf("O endereço da variável i em memória é: %p\n", &i);
  printf("O endereço da variável i em memória é: %p\n", p);
  printf("O valor da variável i é: %d\n", *p); // valor de i mostrado pelo ponteiro p
  *p = 10; // alterando o valor de i pelo ponteiro p
  printf("Valor de i: %d\n", i);
 
  printf("%c\n", *t);
  printf("%s\n", t);

  return 0;
}
