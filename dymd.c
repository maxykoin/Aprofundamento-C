#include "stdio.h"
int main(void) {
  int d, y, m;
  printf("Insira o número de dias: ");
  scanf("%i", &d);

  y = d / 365;
  m = d / 30;

  printf("%i dias equivale a %i ano(s) e %i mês(es)", d, y, m);
  return 0;
}
