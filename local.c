#include <stdio.h>

void funcao1(void) {
  int i = 0;
  printf("%d\n", i++);
}

void funcao2(void) {
  static int i = 0;
  printf("%d\n", i++);
}

int main(void) {
  funcao1();
  funcao1();
  funcao1();
  printf("\n");
  funcao2();
  funcao2();
  funcao2();
  return 0;
}
/* a cada chamada da funcao1() é como se a variavel i fosse redeclara
 * já com o static o valo incrementado dps da chamada continua salvo
 * o contrário de static é auto, porem auto é o padrao entao não precisa digita-lo
 * vc não pode chamar uma variavel static de outro arquivo em que ela não esteja*/
