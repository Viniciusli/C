#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
  int v[10];
  int maior = 0;
  int *pmaior = &maior;

  for (unsigned short i = 0; i < sizeof v / sizeof v[0] ; i++){
    printf("Digite um número: ");
    scanf("%d", &v[i]);

    if (v[i] > maior){
      maior = v[i];
      
    }
  }
  
  printf("%d\n", *pmaior);

  return EXIT_SUCCESS;
}
