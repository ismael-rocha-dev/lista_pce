#include <stdio.h>


int main(){
    float k,c;
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("\nA temperatura em graus Celsius e:  %.2f°C \n",c);

    return 0;
}