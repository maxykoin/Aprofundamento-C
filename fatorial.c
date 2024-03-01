#include "stdio.h"
int main(void) {
  int n;
  int f = 1;

  printf("Insira um número: ");
  scanf("%i", &n);

  for(int i = 1; i <= n; i++){
    f = f * i;
  }
  printf("%i", f);
  return 0;
}
