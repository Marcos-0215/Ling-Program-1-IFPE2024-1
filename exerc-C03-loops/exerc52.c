// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 52
// Finished by 06 Jul 2024

#include <stdio.h>


int main() {
  
  float saque;
  
  printf("Valor do Saque: ");
  scanf("%f", &saque);
 
  int notas[7] = {1, 2, 5, 10, 20, 50, 100};
  
  int qnt[7];
  
  
  for (int i=6; i>=0; i--) {
    qnt[i] = saque/notas[i];
    saque-=qnt[i]*notas[i];
  }
  
  printf("--------------\n");
  
  for (int i=6; i>=0; i--) {
    printf("%2d de R$ %d,00\n",  qnt[i], notas[i]);
  }
  
  
  return 0;
}