#include <stdio.h>

int main(void){
  /* 
   * 0: bicicleta
   * 1: quadriciclo
   * 2: motocicleta
   */
  int produto[100];
  float preco[100];
  int qtdBicicletas=0; // bicicletas com preco > 325
  int qtdMotos=0, motos10000=0; // quantidade de motocicletas
  int qtdQuadriciclos=0; // quantidade de quadriciclos
  int i;

  printf("Códigos dos produtos:\n1: bicicleta\n2: quadriciclo\n3: motocicleta\n\n");

  for (i=0; i<10; i++){
    printf("informe o código do produto: ");
    scanf("%d", &produto[i]);
    if (produto[i] > 3 && produto[i] < 1){
      printf("código inválido");
      return 1;
    }
    printf("Informe o preço do produto: R$");
    scanf("%f", &preco[i]);

    if (produto[i] == 1 && preco[i] > 325)
      qtdBicicletas++;
    else if (produto[i] == 3)
      qtdMotos++;
      if (preco[i] > 10000)
        motos10000++;
    else if (produto[i] == 2 && preco[i] > 2500)
      qtdQuadriciclos++;
  }
  printf("\nBicicletas com preço > R$325: %d\n", qtdBicicletas);
  printf("Quantidade de motocicletas: %d\n", qtdMotos);
  printf("Quadriciclos com preço > R$2500: %d\n", qtdQuadriciclos);
  printf("Motocicletas com preço > R$10000: %d\n", motos10000);
  return 0;
}

