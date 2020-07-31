#include <stdio.h>

int main(){
    float x1,x2,x3,x4,media;
    printf("digite o primeiro numero: ");
    scanf("%f",&x1);
    printf("\n digite o segundo numero: ");
    scanf("%f",&x2);
    printf("\n digite o terceiro numero: ");
    scanf("%f",&x3);
    printf("\n digite o quarto numero: ");
    scanf("%f",&x4);
    media = (x1 + x2 + x3 + x4)/4;
    printf("\n A media e: %.2f \n",media);
    return 0;
}