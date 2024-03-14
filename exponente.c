#include <stdio.h>

// Função para calcular a potência de um número

double potencia(double base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    double base;
    float expoente;

    printf("Digite a base: ");
    scanf("%le", &base);
    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    printf("Resultado: %.2f\n", potencia(base, expoente));

    return 0;
}
