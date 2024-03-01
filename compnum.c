#include "stdio.h"
int main(void) {
  int n1, n2;
  printf("Insira o primeiro número: ");
  scanf("%i", &n1);

  printf("Insira o segundo número: ");
  scanf("%i", &n2);

  if(n1 > n2){
    printf("O número %i é maior do que o número %i", n1, n2);
  } else {
    printf("O número %i é maior do que o número %i", n2, n1);
  }
  
  return 0;
}
