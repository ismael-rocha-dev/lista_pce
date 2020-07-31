#include <stdio.h>

int main(){
    float valorHora,horas, salarioBruto, ir, inss,sind,salarioLiq;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f",&valorHora);
    printf("\nDigite quantas horas voce trabalha por mes: ");
    scanf("%f",&horas);
    salarioBruto = horas*valorHora;
    ir = 0.11*salarioBruto;
    inss = 0.08*salarioBruto;
    sind = 0.05*salarioBruto;
    salarioLiq = salarioBruto - ir - inss - sind;
    printf("\n+Salario Bruto:R$ %.2f",salarioBruto);
    printf("\n-IR(11%%):    R$%.2f",ir);
    printf("\n-inss(8%%):   R$%.2f",inss);
    printf("\n-sind(5%%):   R$%.2f",sind);
    printf("\n\n=salarioLiq:  R$%.2f\n",salarioLiq);

    return 0;
}