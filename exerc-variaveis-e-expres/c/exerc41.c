#include <stdio.h>

int main()
{
// 41

float valorHora;
float qntHora;

printf("Digite o valor da hora de trabalho do funcionário:\nR$ ");
scanf("%f", &valorHora);

printf("Digite o número de horas trabalhadas no mês:\nR$ ");
scanf("%f", &qntHora);

printf("\nO valor a ser pago ao funcionário: R$ %.2f.", valorHora * qntHora * (1 + 0.1));
printf("\n(já incluso o adicional de R$ %.2f)", valorHora * qntHora * 0.1);

return 0;
}