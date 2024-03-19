#include <stdio.h>

int main()
{
// 33

float lado;
float area;

printf("Digite o tamanho do lado de um quadrado:\n");
scanf("%f", &lado);

area = lado * lado;

printf("\nSe o lado de um quadrado é %.1f, sua área é %.1f", lado, area);

return 0;
}