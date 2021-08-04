#include <stdio.h>
#include <stdlib.h>

void erro(char *msg){
  if (msg != NULL)
    fprintf(stderr, "Erro: %s\n", msg);
  exit(1);
}

void bubble_sort(int numeros[], int len_numeros){
  int i, j;
  int maior, indice_maior;
  int numeros_ordenados[len_numeros];

  for (i=0; i<len_numeros; i++){
    maior = 0;
    for (j=0; j<len_numeros; j++){
      if (numeros[j] > maior){
        maior = numeros[j];
        indice_maior = j;
      }
    }
    numeros[indice_maior] = 0;
    numeros_ordenados[i] = maior;
  }
  for (i=0; i<len_numeros; i++)
    printf("%d\n", numeros_ordenados[i]);
}

void selection_sort(int numeros[], int len_numeros){
  int i, j;
  int menor, indice_maior, tmp;
 
  for (i=0; i<len_numeros-1; i++){
    menor = i;
    for (j=i+1; j<len_numeros; j++){
      if (numeros[j] < numeros[menor]){
        menor = j;
      }
    }
    if (i != menor){
      tmp = numeros[i];
      numeros[i] = numeros[menor];
      numeros[menor] = tmp;
    }
  }
  for (i=0; i<len_numeros; i++)
  printf("%d\n", numeros[i]);
}


int main(int argc, char *argv[]){
  int user_apostas[15] = {0}, i=0;
  int user_qtd_num;
  int user_metodo;

  printf("É possível apostar de 5 a 15 números.\n");
  printf("Informe a quantidade de números que deseja apostar: ");
  scanf("%d", &user_qtd_num);

  if (user_qtd_num > 15 || user_qtd_num < 5)
    erro("Quantidade de números inválida!!!");

  // preechendo o array user_apostas com os números desejados pelo user
  printf("\nA seguir, informe os números que vc deseja apostar\n");
  for (i=0; i<user_qtd_num; i++){
    printf("Informe um número de 1 a 80: ");
    scanf("%d", &user_apostas[i]);

    if (user_apostas[i] > 80 || user_apostas[i] < 1)
      erro("Número Inválido!!!\nSelecione um número no intervalo de 1 a 80!");
  }

  // o usuario informa o método de ordenação 
  printf("\nInforme o método de ordenação:\n[1] Bubble sort\n[2]Selection sort\n:");
  scanf("%d", &user_metodo);


  if (user_metodo == 1){
    printf("\nSeus números ordenados são:\n");
    bubble_sort(user_apostas, user_qtd_num);
  }else if (user_metodo == 2){
    printf("\nSeus números oredenados são: \n");
    selection_sort(user_apostas, user_qtd_num);
  }else{
    erro("Número informado não corresponde a nenhum método de ordenação");
  }

  return 0;
}
