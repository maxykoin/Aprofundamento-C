#include "stdio.h"
int main(void) {
  int n;
  int r = 0;
  printf("insira um número: ");
  scanf("%i", &n);

  for(int i = 2; i < n; i++){
    if(n % i == 0){
      r++;
    }
  }

  if(r!=0){
    printf("Esse número é primo");
  } else{
    printf("esse número não é primo");
  }
  
  return 0;
}
