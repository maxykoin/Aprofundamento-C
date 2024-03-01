#include "stdio.h"
int main(void) {
  int n;
  printf("Insira um número: ");
  scanf("%i", &n);

  if(n % 2 == 0){
    printf("O número %i é par", n);
  } else {
    printf("O número %i é ímpar", n);
  }
  return 0;
}