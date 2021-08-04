#include <stdio.h>
#include <limits.h> // INT_MAX / UINT_MAX / USHRT_MAX
#include <stdint.h>
#include <stdlib.h>


int main(void){
  int a, b;
  a = 2; // 10
  b = 3; // 11
    //a & b 10 and
    //a | b 11 or
    //a ^ b 01 xor
    //! negação lógica
    //~ negação bit a bit
    //<< empurra o bit para a esquerda (acrescenta um zero a direita, em binario significa 2x)
    //>> empurra o bit para a direita (acrescenta um zero a esquerda) 

  // printf("O resultado é: %d\n", a && b); os dois & siginoficam operadores lógicos
  printf("O resutado é: %d\n", a & b);// com somente um & cada bit do numero é considerado
  printf("O resutado é: %d\n", a | b);// com somente um & cada bit do numero é considerado
  printf("O resutado é: %d\n", a ^ b);// com somente um & cada bit do numero é considerado
  a = 0;
  printf("O resutado é: %d\n", !a);// com somente um & cada bit do numero é considerado
  printf("O resutado é: %d\n", ~a);// com somente um & cada bit do numero é considerado
  a = 0b1000;
  printf("O resutado é: %d\n", a << 1);// com somente um & cada bit do numero é considerado
  printf("O resutado é: %d\n", a >> 1);// com somente um & cada bit do numero é considerado


  return 0;
}
