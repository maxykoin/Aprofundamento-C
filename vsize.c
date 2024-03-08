#include <stdio.h>

int main()
{
    int n, valor;
    printf("Escolha o tamanho do vetor: ");
    scanf("%i", &n);
    
    int vetor[n];
    
    for(int i = 0; i < n; i++){
        printf("Insira o %iº valor: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    for(int j = n-1; j >= 0; j--){
        printf("%i", vetor[j]);
    }

    return 0;
}
