#include "math.h"
#include "stdio.h"

int main(void) {
  float a, b, c, delta;
  printf("ax² + bx + c = 0\n");
  printf("Insira o valor de a: ");
  scanf("%f", &a);

  printf("Insira o valor de b: ");
  scanf("%f", &b);

  printf("Insira o valor de c: ");
  scanf("%f", &c);

  delta = (b * b) - (4 * a * c);

  if (delta > 0) {
    printf("Existem duas raizes reais: %.2f e %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta))/ (2 * a));
  } else if (delta == 0) {
    printf("Existe uma raiz real: %.2f", (-b + sqrt(delta))/ (2 * a));
  } 

  return 0;
}
