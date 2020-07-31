#include <stdio.h>

int main(){
float valor;
int nota50 =0, nota10=0, nota5=0, nota1=0;

printf("Digite a quantia que voce quer sacar: R$");
scanf("%f", &valor);

if(valor >= 50){
    nota50 = valor/50;
    valor = valor - nota50*50;
}
if(valor >= 10){
    nota10 = valor/10;
    valor = valor - nota10*10;
}
if(valor >= 5){
    nota5 = valor/5;
    valor = valor - nota5*5;
}
if(valor >= 1){
    nota1 = valor;    
}
printf("\nNotas de R$50: %i\nNotas de R$10: %i\nNotas de R$5: %i\nNotas de R$1:%i\n",nota50,nota10,nota5,nota1);


    return 0;
}