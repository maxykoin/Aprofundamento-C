#include <stdio.h>

int prime(int n){
    int d;
    
    for(int i = 2; i <=n; i++){
        if(n%i == 0){
            d +=1;
        }
        
        if(d>=1){
            return 1;
        } else {
            return 0;
        }
    }
}

int main(){
    int n;
    
    printf("Insira um número: ");
    scanf("%i", &n);
    
    if(prime(n) == 0){
        printf("O número %i é primo", n);
    } else if (prime(n)==1){
        printf("O número %i não é primo", n);
    }
    
    return 0;
}