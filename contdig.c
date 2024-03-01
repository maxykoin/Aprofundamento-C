#include "stdio.h"
int main(void) {
  int n, y, x;
  printf("Insira um número: ");
  scanf("%i", &n);

  while (n != 0) {
    y = n % 10;
    n = n / 10;
  }

  printf("%i\n", x);
  return 0;
}