#include "stdio.h"
int main(void) {
  int n;
  printf("Insira um número: ");
  scanf("%i", &n);

  if(n > 0){
    printf("O número %i é positivo", n);
  } else if(n < 0){
    printf("O número %i é negativo", n);
  } else {
    printf("O número %i é nulo", n);
  }
  
  return 0;
}
