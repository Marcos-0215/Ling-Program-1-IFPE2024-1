// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 08:
8) Tendo como base na aplicação acima, crie um programa que calcule o valor total da poupança que além do valor inicial e valor do juros, também receba valores de aplicações mensais (ex.: R$50,00/mês) durante todo o período da sua idade até os 65 anos.
*/


#include <stdio.h>

float calcularTotalPoupanca(float inicial, float jurosMensal, int meses, float aporteMensal) {
  
  if (meses==0) {
    return inicial;
  }
  return aporteMensal + (1 + jurosMensal/100) * calcularTotalPoupanca(inicial, jurosMensal, meses - 1, aporteMensal);
}

int main() {
 
  float inicial, jurosMensal, aporteMensal;
  int meses;
  
  printf("Digite o valor inicial da aplicação: R$ ");
  scanf("%f", &inicial);
  printf("Digite o valor do juros mensal (em %%): ");
  scanf("%f", &jurosMensal);
  printf("Digite a quantidade de meses (até 65 anos): ");
  scanf("%d", &meses);
  printf("Digite o valor dos aportes mensais: R$ ");
  scanf("%f", &aporteMensal);
  
  printf("-----------\n");
  
  printf("Valor total acumulado: R$ %.2f", calcularTotalPoupanca(inicial, jurosMensal, meses, aporteMensal));
  
  
  return 0;
}