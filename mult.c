#include <stdio.h>
#include <stdlib.h>
#define TAM 3

enum pedras { CAVALO=2, BISPO, TORRE, RAINHA }; /*Primeiro elemento do enum começa com zero
                                                cada palavra do enum representa um número começando do zero
                                                a impressão disso será os numeros*/

 int main(int argc, char *argv[]){ //podemos usar **argv / o char *envp[] armazena ar var de ambiente
  int tabu[TAM][TAM] = { 0 }; // iniciamos todas posições com 0 defindo com { 0 }i ou só {}
  int i, j;

  tabu[0][0] = CAVALO;  // **tabu
  tabu[0][1] = BISPO;   // *((*tabu)+1)
  tabu[1][0] = TORRE;   // *(*(tabu+1))
  *(*(tabu+1)+1) = RAINHA;  // *(*(tabu+1)+1) equivale a: tabu[0][0]

  for (i=0; i<TAM; i++){
    for (j=0; j<TAM; j++){
      printf("[%d][%d] = %d ", i, j, tabu[i][j]);
      if (j == TAM-1){
       putchar('\n');
      }
    }
  } 


  return 0;
}
