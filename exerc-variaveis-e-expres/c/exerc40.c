#include <stdio.h>

int main()
{
// 40

float diaria = 30.00;
int dias;

printf("Digite o número de dias trabalhados pelo encanador:\n");
scanf("%d", &dias);

printf("\nA quantia líquida a ser paga é R$ %.2f.", diaria * dias * (1 - 0.08));
printf("\n(já abatido o imposto de R$ %.2f)", diaria * dias * 0.08);

return 0;
}