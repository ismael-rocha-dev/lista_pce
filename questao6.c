#include <stdio.h>

int main(){
    float g,r;
    printf("Digite o valor do angulo em graus:  ");
    scanf("%f",&g);
    r = g*(3.1415/180);
    printf("\nO valor em radianos e:  %.2f rad",r);
    return 0;
}