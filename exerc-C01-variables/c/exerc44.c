#include <stdio.h>

int main()
{
// 44

float degrau;
float altura;
int resultado;

printf("Digite a altura do degrau da escada:\n");
scanf("%f", &degrau);

printf("Digite a altura total a ser alcançada:\n");
scanf("%f", &altura);

resultado = altura / degrau;

printf("\nSerá necessário subir %d degraus para atingir seu objetivo.", resultado);

return 0;
}