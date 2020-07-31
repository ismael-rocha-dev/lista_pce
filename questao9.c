#include <stdio.h>

int main(){
    float b,h,area;
    printf("Digite a medida da base do triangulo: ");
    scanf("%f",&b);
    printf("\nDigite a medida da altura do triangulo: ");
    scanf("%f",&h);
    area = (b*h)/2;
    printf("\nA area do triangulo com base %.2f e altura %.2f e:  %.2f \n",b,h,area);
   
    return 0;
}