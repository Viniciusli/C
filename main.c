#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char *argv[], char *envp[]){ //podemos usar **argv / o char *envp[] armazena ar var de ambiente
  int i; // 4 bytes alocados para um int32

  printf("Endereço de i: %p\nTamanho de i: %zu\n\n", &i, sizeof i);

  int *p = NULL; // inicie um ponteiro com NULL.
  printf("Endereço de p: %p\nTamanho de p: %zu\n\n", &p, sizeof p);
  
  p = &i;
  printf("p = &i; \n\n");
  printf("Endereço de p: %p\nTamanho de p: %zu\n", &p, sizeof p);
  printf("Conteudo de p: %p\n\n", p);


  /* puts(argv[1]); // retorna ./main, justamente a chamada do programa
   puts(argv[8]); // retorna uma variável de ambiente

  // argc
  printf("Número de argumentos: %d\n", argc);*/
  for (i = 0; i < argc; i++)
    puts(argv[i]);

 // *p = 9;
 // printf("%d\n", i);


  /*int *j;
  *j = 9; 
  printf("J: %d\n", *j);
  // no código das tres linhas acima, vai dar erro, precisamos usar o malloc()*/
  
  // ALOCAÇÃO DINÂMICA
  
  int *j = NULL;

  j = malloc(sizeof (int)); // reserva no ponteiro o tamanho de um int
  // malloc() retorna um ponteiro para uma memória alocada, ou seja, aloca uma memoria num endereço
  // e retorna um ponteiro para ela
  printf("Para onde j aponta: %p\n", j);
  *j = 9;

  printf("J: %d\n", *j);
  //dps de usar a memória alocada, é importante desaloca-la usando: 
  free(j);
  return 0;
}
