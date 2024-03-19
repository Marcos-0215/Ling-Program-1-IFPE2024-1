#include <stdio.h>

int main()
{
// 34

float raio;
float area;

printf("Digite o tamanho do raio de um círculo:\n");
scanf("%f", &raio);

area = raio * raio * 3.141592;

printf("\nSe o raio de um círculo é %.1f, sua área é %.1f", raio, area);

return 0;
}