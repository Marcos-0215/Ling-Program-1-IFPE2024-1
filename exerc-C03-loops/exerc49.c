// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 49
// Finished by 05 Jul 2024

#include <stdio.h>

int main() {
  
  float poup, rf;
  
  printf("Taxa Poupança (em %%): ");
  scanf("%f", &poup);
  printf("Taxa Renda Fixa (em %%): ");
  scanf("%f", &rf);
  
  float carlos = 100;
  float joao = carlos/3;
  
  float montanteCarlos = carlos;
  float montanteJoao = joao;
  int count=0;
  
  while (montanteJoao<montanteCarlos) {
    
    montanteCarlos = montanteCarlos*(1+ (poup/100)) + carlos;
    montanteJoao = montanteJoao*(1 + (rf/100)) + joao;
    count++;
    
    //printf("MÊS: %d\n", count);
    //printf("Carlos: R$ %.2f\n", montanteCarlos);
    //printf("João: R$ %.2f\n", montanteJoao);
    //printf("------------------\n");
    
  }
  
  printf("Meses depois: %d\n", count);
  
  
  return 0;
}