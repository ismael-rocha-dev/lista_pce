#include <stdio.h>

int main(){
    float c,f;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f",&c);
    f = c*(9.0/5.0)+32.0;
    printf("\nA temperatura em graus Fahrenheit e:  %.2f°F \n",f);
   
    return 0;
}