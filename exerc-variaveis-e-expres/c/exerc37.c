#include <stdio.h>

int main()
{
// 37

float bruto;
float liquido;
float desconto = 0.12;


printf("Digite o valor de um produto, para obter seu valor com desconto de 12%%:\n");

printf("R$ ");
scanf("%f", &bruto);

liquido = bruto * (1 -desconto);

printf("\nO valor do produto com desconto é:\nR$ %.2f", liquido);

return 0;
}