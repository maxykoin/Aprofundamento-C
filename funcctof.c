#include <stdio.h>

float ctof(float c){
    return (c * (9/5)) + 32;
}

float ftoc(float f){
    return (f - 32) * (5/9);
}

int main(){
    int op;
    float temp;
    
    printf("1) Celsius pra f\n2)F pra celsius\nResposta: ");
    scanf("%i", &op);
    
    if(op==1){
        printf("Temp: ");
        scanf("%f", &temp);
        printf("%.2f", ctof(temp));
    } else if(op==2){
        printf("Temp: ");
        scanf("%f", &temp);
        printf("%.2f", ftoc(temp));
    }
    
    return 0;
}