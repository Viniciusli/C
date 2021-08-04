#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>


int main(void){
  int a = 5;

  if (5 == a && a < 2){ // é o mesmo de a == 5 porém o modo usado evita que inserirmos
    //bugs sem quere (ex: if (a = 5), a condição será executada)
    printf("%d\n", a + 5);
  } else if(a > 5){
    printf("Segunda condição sendo executada\n");
  } else {
    printf("Primeira e segunda condição não executadas\n");
  }
    

  return 0;
}
