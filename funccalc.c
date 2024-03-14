#include <stdio.h>

float n1, n2;
char symb;

int menu(){
   int op;
   printf("Escolha a operação:\n1) Soma\n2) Subtração\n4) Multiplicação\n5) Divisão\nResposta: ");
   scanf("%i", &op);
   return op;
}

void nums(){
    printf("Primeiro Valor: ");
    scanf("%f", &n1);
    
    printf("Segundo Valor: ");
    scanf("%f", &n2);
}

void print(float x, char op, float y, float res){
    printf("%.2f %c %.2f = %.2f", x, symb, y, res);
}

int main(){
    switch(menu()){
        case 1:
            nums(n1, n2);
            symb = '+';
            print(n1, symb, n2, (n1+n2));
            break;
        
        case 2:
            nums(n1, n2);
            symb = '-';
            print(n1, symb, n2, (n1-n2));
            break;
        
        case 3:
            nums(n1, n2);
            symb = 'x';
            print(n1, symb, n2, (n1*n2));
            break;
        
        case 4:
            nums(n1, n2);
            symb = '/';
            print(n1, symb, n2, (n1/n2));
            break;
            
        case default:
            printf("Inválido")
    }
    return 0;
}