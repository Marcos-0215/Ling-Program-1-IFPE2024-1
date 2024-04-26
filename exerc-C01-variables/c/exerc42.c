#include <stdio.h>

int main()
{
// 42

float salBase;

printf("Digite o salário-base do funcionário:\nR$ ");
scanf("%f", &salBase);

printf("\nO salário a receber é: R$ %.2f.", salBase * (1 + 0.05) - (salBase * 0.07));
printf("\n(já inclusa a gratificação de R$ %.2f)", salBase * (0.05));
printf("\n(e já abatido o imposto de R$ %.2f)", salBase * 0.07);

return 0;
}