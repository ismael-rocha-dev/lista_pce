#include <stdio.h>

int main(){
    int x,s;
    printf("Digite um numero inteiro positivo: ");
    scanf("%i",&x);
    s = (x*(x+1))/2;
    printf("\nA soma dos inteiros positivos de 1 a %i e:  %i \n",x,s);
   
    return 0;
}