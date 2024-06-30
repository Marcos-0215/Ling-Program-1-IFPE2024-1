// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 36
// Finished by 25 Jun 2024


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  int num=100;
  int somaQdr=0;
  int qdrSoma=0;
  
  for (int i=1; i<=num; i++) {
    somaQdr += i*i;
    qdrSoma += i;
  }
  
  qdrSoma *= qdrSoma;
  
  
  printf("Soma dos quadrados de 1 a %d:\n%d\n", num, somaQdr);
  printf("Quadrado da soma de 1 a %d:\n%d\n", num, qdrSoma);
  
  printf("\nDiferença: %d\n", qdrSoma-somaQdr);

  return 0;
}