// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 51
// Finished by 06 Jul 2024

#include <stdio.h>


int main() {
  
  int anoAtual;
  
  printf("Ano atual: ");
  scanf("%d", &anoAtual);
  
  printf("-----------\n");
  
  float salario = 2000.0;
  float taxa = 0.015;
  //float aumento = salario*taxa;
  //float salario2 = salario;
  
  for (int i=0; i<(anoAtual-1995); i++) {
    salario *= (1+taxa);
    taxa*=2;
  }
  
  //for (int i=0; i<(anoAtual-1995); i++) {
  //  salario2 += aumento;
  //  aumento*=2;
  //}
  
  printf("Salario Atual: R$ %.2f\n", salario);
  printf("Último Aumento: %.1f%%\n", (taxa*100)/2);
  
  //printf("Salario Atual2: R$ %.2f\n", salario);
  //printf("Último Aumento2: R$ %.2f\n", aumento/2);
  
  
  return 0;
}