#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2){
  int res;
  res = n1 + n2;
  return res;
}

void ola (char *nome) {  // esta função não possiu retorno
  printf("Olá, %s\n", nome);
}

void tchau (char msg[]) {
  fprintf(stderr, "ERRO: %s\n", msg);
  exit(1);
}

int main(int argc, char *argv[]){
  int num1, num2;
  char nome[10];
  int idade = 0;

  printf("Digite o numero 1: ");
  scanf("%d", &num1);
  printf("Digite o numero 2: ");
  scanf("%d", &num2);

  printf("%d + %d = %d\n", num1, num2, soma(num1, num2)); 
  // caso em outro ponto do programa vc queira utilizar essa mesma estrutura, criar uma função

  printf("Digite seu nome: ");
  scanf("%s", nome);
  ola(nome);
  
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade < 1)
    tchau("Digite uma idade válida!");
  else if (idade > 50)
    tchau("vc ta velho mano");

  printf("Sua idade: %d\n", idade);

  return 0;

 }


