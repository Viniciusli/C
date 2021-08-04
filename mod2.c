#include <stdio.h>

extern int i; // a variavel i está externa ao arquivo atual

void inc_i(void) {
  i++;
}
