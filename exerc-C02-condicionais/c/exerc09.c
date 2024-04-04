#include <stdio.h>

int main() {
  /* C02 - 09 
  Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso  contrário imprima: Empréestimo concedido.
  */

  float salario;
  float prestacao;

  printf("Digite o salário: ");
  scanf("%f", &salario);

  printf("Digite o valor da prestação do empréstimo: ");
  scanf("%f", &prestacao);

  if (prestacao > salario * 0.2) {
    nEmpréstimo não concedido.");
  } else {
    \nEmpréstimo concedido.");
  }

  return 0;
}