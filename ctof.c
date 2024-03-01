#include "stdio.h"

int main(void) {
  float c, f;
  char op;

  printf("Escreva C para converter um valor em celsius para fahrenheit\nF para converter um valor em fahrenheit para celsius\nResposta: ");
  scanf(" %c", &op);

  if(op == 'c'){
    printf("Escreva o valor em celsius: ");
    scanf("%f", &c);
    
    printf("Celsius: %.2f\nFahrenheit: %.2f", c, (c * 9 / 5) + 32);
  }
  else if(op == 'f'){
    printf("Escreva o valor em fahrenheit: ");
    scanf("%f", &f);
    printf("Fahrenheit: %.2f\nCelsius: %.2f", f, (f - 32) * 5/9);
  }
  return 0;
}
