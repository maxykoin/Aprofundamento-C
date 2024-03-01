#include "stdio.h"
int main(void) {
  int n;
  int f = 0;

  printf("Insira um número: ");
  scanf("%i", &n);

  for(int i = 0; i < n; i++){
    f = f + i;
  }
  printf("%i", f);

  return 0;
}