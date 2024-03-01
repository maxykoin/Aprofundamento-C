#include "stdio.h"
int main(void) {
  float n1, n2, n3, n4, m;
  printf("Insira a primeira nota: ");
  scanf("%f", &n1);

  printf("Insira a segunda nota: ");
  scanf("%f", &n2);

  printf("Insira a terceira nota: ");
  scanf("%f", &n3);

  printf("Insira a quarta nota: ");
  scanf("%f", &n4);

  m = (n1 + n2 + n3 + n4) / 4;

  if (m >= 7) {
    printf("O aluno está aprovado");
  } else if (m < 7 && m >= 5) {
    printf("O aluno está de recuperação");
  } else {
    printf("O aluno está reprovado");
  }

  return 0;
}
