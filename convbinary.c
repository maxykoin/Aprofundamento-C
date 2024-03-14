#include <stdio.h>

void converteParaBinario(int n) {
    int binario[32];
    int i = 0;
    
    if (n == 0) {
        printf("0\n");
        return;
    }
    
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um numero decimal para converter para binario: ");
    scanf("%i", &n);
    
    printf("Binario: ");
    converteParaBinario(n);
    
    return 0;
}

