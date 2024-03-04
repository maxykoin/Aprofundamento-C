#include <stdio.h>
#include <math.h>

int main() {
    int num, ex, n1, n2, n3, n4;
    
    printf(" 1) Números Reais \n 2) Números Imaginários \n Resposta: ");
    scanf("%i", &num);
    
    switch(num){
        case 1:
            printf("Escolha a operação: \n [1] Soma \n [2] Subtração \n [3] Divisão \n [4] Multiplicação \n [5] Potenciação \n Resposta: ");
            scanf("%i", &ex);
            switch(ex){
                case 1:
                    printf("Primeiro valor: ");
                    scanf("%i", &n1);
                    printf("Segundo valor: ");
                    scanf("%i", &n2);
                    
                    printf("%i + %i = %i", n1, n2, n1+n2);
                    break;
                case 2:
                    printf("Primeiro valor: ");
                    scanf("%i", &n1);
                    printf("Segundo valor: ");
                    scanf("%i", &n2);
                    
                    printf("%i - %i = %i", n1, n2, n1-n2);
                    break;
                case 3:
                    printf("Primeiro valor: ");
                    scanf("%i", &n1);
                    printf("Segundo valor: ");
                    scanf("%i", &n2);
                    
                    printf("%i / %i = %i", n1, n2, n1/n2);
                    break;
                case 4:
                    printf("Primeiro valor: ");
                    scanf("%i", &n1);
                    printf("Segundo valor: ");
                    scanf("%i", &n2);
                    
                    printf("%i x %i = %i", n1, n2, n1*n2);
                    break;
                case 5:
                    printf("Base: ");
                    scanf("%i", &n1);
                    printf("Expoente: ");
                    scanf("%i", &n2);
                    int p = pow(n1, n2);
                    
                    printf("%i^%i = %i", n1, n2, p);
                    break;
            }
        
        case 2:
            printf("Escolha a operação: \n [1] Conversão Retângulas -> Polar \n [2] Conversão Polar -> Retângular \n [3] Soma \n [4] Multiplicação \n [5] Divisão \n Resposta: ");
            scanf("%i", &ex);
            switch(ex){
                case 1:
                    printf("Valor Real: ");
                    scanf("%i", &n1);
                    printf("Valor Imaginário: ");
                    scanf("%i", &n2);
                    
                    double real = sqrt(pow(n1, 2) + pow(n2, 2));
                    double ang = atan2(n2, n1) * (180 / M_PI);
                    
                    printf("%d∠%d°", real, ang);
            }
        break;
    }
    
    return 0;
}
