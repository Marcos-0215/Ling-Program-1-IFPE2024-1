// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 07:
7) Crie uma função que retorne o valor total de uma aplicação na poupança baseado na sua idade de contribuição trabalhista aos 65 anos (na aposentadoria). O programa deve receber um valor inicial da aplicação na poupança (ex.: R$5000,00), o valor do juros mensal e a quantidade de meses. Baseado na fórmula https://goo.gl/EFd26p retorne o valor total de quanto terá na poupança até o ano de aposentadoria.
*/


#include <stdio.h>

float calcularTotalPoupanca(float inicial, float jurosMensal, int meses) {
  
  if (meses==0) {
    return inicial;
  }
  return (1 + jurosMensal/100) * calcularTotalPoupanca(inicial, jurosMensal, meses - 1);
}

int main() {
 
  float inicial, jurosMensal;
  int meses;
  
  printf("Digite o valor inicial da aplicação: R$ ");
  scanf("%f", &inicial);
  printf("Digite o valor do juros mensal (em %%): ");
  scanf("%f", &jurosMensal);
  printf("Digite a quantidade de meses (até 65 anos): ");
  scanf("%d", &meses);
  
  printf("-----------\n");
  
  printf("Valor total acumulado: R$ %.2f", calcularTotalPoupanca(inicial, jurosMensal, meses));
  
  
  return 0;
}