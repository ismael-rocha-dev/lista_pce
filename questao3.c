#include <stdio.h>

int main(){
    int x,y,z, res;
    printf("digite o primeiro numero: ");
    scanf("%i",&x);
    printf("\ndigite o segundo numero: ");
    scanf("%i",&y);
    printf("\ndigite o terceiro numero: ");
    scanf("%i",&z);
    res = x+y+z;
    printf("\nA soma desses numeros e: %i \n",res);

    return 0;
}