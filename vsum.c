#include <stdio.h>

int main(){
    int sum; 
    int vetor[5] = {3,4,5,1,2};
    
    for(int i = 0; i < 5; i++){
        sum += vetor[i];
    }
    
    printf("%i\n%i", sum, (sum/5));

    return 0;
}
