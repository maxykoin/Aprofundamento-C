#include <stdio.h>

int main(){
    int maior, menor; 
    int vetor[5] = {3,4,5,1,2};
    
    for(int i = 0; i < 5; i++){
        if(i==0){
            menor = vetor[i];
            maior = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        
        if (vetor [i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("%i\n%i", maior, menor);

    return 0;
}
