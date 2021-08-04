#include <stdio.h>
#include <stdlib.h>
#define MALLOC(ptr, size) {\
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "Memória insuficiente"); \
    exit(1); \
  } \
} 

/*muitas vezes podemos precisar usar o malloc varias vezes, por isso é interessante a função a seguir:*/
void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL) {
    fprintf(stderr, "Memória insuficiente");
    exit(1);
  }
  return ptr;
}
// caso vc seja preguiçoso e não queira chamar função toda hora
// declare um macro com o #define

/*A macro é como se a gente copiasse o código escrito no lugar onde ele é chamado
 * já a função é uma função
 * os dois tem vantagens e desvantagens
 * mas a macro é mais tem uma execução mais rápida
 * porém a função vai deixar teu programa menor*/

int main(int argc, char *argv[]){
  /*Imagine que vc precisa ler um arquivo e armazena-lo numa variavel,
    vc precisará dizer quanto de memória precisa para armazena-lo*/
  int *p, i;
  /*if (p == NULL){
    return 1;      //este bloco verifica se há espaço em memória para ser alocado
                   //porem, no caso de varios usos, faz-se necessário a declaração de uma função
                   //malloc_s -- malloc safe
  }*/
  
  /*usado a função malloc_s*/
  p = malloc_s(sizeof (int)); // em p há um endereço de memória com 4 bytes
  *p = 9;
  printf("%d\n", *p);
  free(p); // toda memória alocada precisa ser liberada, obviamente dps do uso né cacete

  /*Usando a macro MALLOC*/
  MALLOC(p, sizeof(int)); //MALLOC (ptr, n * sizeif(int)); com n sendo o numero de elementos.
  *p = 10;
  printf("%d\n", *p);
  free(p); // toda memória alocada precisa ser liberada

  MALLOC(p, 5 * sizeof(int));
  *p = 20;
  *(p+1) = 21;
  *(p+2) = 22;
  *(p+3) = 23;
  *(p+4) = 24;
  *(p+4) = 24;
  for (i=0; i<5; i++)
    printf("%d\n", *(p+i));

  /*REALLOC:
   * realloc(*ptr, size_t size); modifica o tamanho da memória alocada
  */
  p = realloc( p, 6 * sizeof (int));
  *(p+5) = 25;
  printf("%d\n", *(p+5));
  free(p);

  /*menset: inicializando tudo a memór ia ex:
   * memset(p, 0, n*sizeof (int)) ou seja, em p, eu quero o valor 0, n vezes*/

  return 0;

 }

