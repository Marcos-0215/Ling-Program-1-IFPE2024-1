#include <stdio.h>

int main()
{
// 43

float valorOrig;

printf("Digite o valor total inicial:\nR$ ");
scanf("%f", &valorOrig);

printf("\nÀ vista, o total a pagar com desconto: R$ %.2f.", valorOrig * 0.9);
printf("\nO valor de cada parcela, no parcelamento 3x sem juros: R$ %.2f.", valorOrig / 3);
printf("\nA comissão do vendedor: R$ %.2f.", valorOrig * 0.05);

return 0;
}