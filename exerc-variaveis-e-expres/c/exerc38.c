#include <stdio.h>

int main()
{
  // 38

  float salario;
  float novo;
  float aumento = 0.25;


  printf("Digite o salário do funcionário, para obter o novo valor com aumento de 25%%:\n");

  printf("R$ ");
  scanf("%f", &salario);

  novo = salario * (1 + aumento);

  printf("\nO novo valor do salário é:\nR$ %.2f", novo);

  return 0;
}