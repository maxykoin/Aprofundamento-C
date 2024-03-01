#include <stdio.h>

int main(void) {
  float n1, n2;
  int op;

  printf("Escolha o primeiro valor: ");
  scanf("%f", &n1);

  printf("Escolha o segundo valor: ");
  scanf("%f", &n2);

  printf("Operações: \n1) Soma\n2) Subtração\n3) Multiplicação\n4) Divisão\n0) Sair\nResposta: ");
  scanf("%i", &op);

  switch (op) {
  case 1:
    printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
    break;
  case 2:
    printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
    break;
  case 3:
    printf("%.2f x %.2f = %.2f", n1, n2, n1 * n2);
    break;
  case 4:
    printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
    break;
  default:
    printf("Valor Inválido");
  }
}