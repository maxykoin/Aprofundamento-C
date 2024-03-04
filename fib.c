#include <stdio.h>
int main(){
    int n, c, n3;
    int n1 = 0;
    int n2 = 1;
    
    printf("Escolha a quantidade de termos: ");
    scanf("%i", &n);
    
    printf("%i -> %i -> ", n1, n2);
    
    for(int i = 0; i <= n; i++){
      n3 = n1 + n2;
      printf("%i ->", n3);
      n1 = n2;
      n2 = n3;
    }
    return 0;
}
