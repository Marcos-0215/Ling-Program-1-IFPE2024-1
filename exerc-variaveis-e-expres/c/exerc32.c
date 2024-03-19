#include <stdio.h>

int main()
{
int input;
int resultado;

printf("Digite um número inteiro:\n");
scanf("%d", &input);

resultado = ((input * 3) + 1) + ((input * 2) - 1);

printf("\nA soma do sucessor de seu triplo com o antecessor de seu dobro é:\n%d", resultado);

return 0;
}