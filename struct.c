#include <stdio.h>
#include <stdlib.h>
/*nas estruturas, vc pode armazenar mais de um tipo de dado*/
struct st {
  unsigned char id;
  unsigned int num;
};

int main(int argc, char *argv[]){
  struct st s; // struct st s[n] em que n será o número de estruturas

  s.id = 1;
  s.num = 2021;

  printf("s.id: %d\n", s.id);
  printf("s.numero: %d\n", s.num);

  printf("sizeof(struct st): %zu\n", sizeof(struct st));

  return 0;

 }

