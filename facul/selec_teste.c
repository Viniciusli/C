#include <stdio.h>

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

int main(void){
  int nums[5] = {45, 22, 66, 88, 1};

  selection_sort(nums, 5);
  return 0;
}
  

