#include <stdio.h>
#include <stdlib.h>
/*nas estruturas, vc pode armazenar mais de um tipo de dado*/
union st {
  unsigned char id;
  unsigned int num;
};

int main(int argc, char *argv[]){
  union st s; // union st s[n] em que n será o número de estruturas

  s.num = 2021;
  s.id = 1;

  printf("s.numero: %d\n", s.num);

  printf("sizeof (union st): %zu\n", sizeof(union st));
  /* diferente da struct, union possui sizeof de 4 bytes
   * isso pq ela adimite o maior tipo declarado, e neste caso o int (4 bytes)*/

  return 0;

 }

