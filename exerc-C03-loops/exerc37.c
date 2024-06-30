// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 37
// Finished by 28 Jun 2024

#define MIN 1000
#define MAX 9999

#include <stdio.h>

int main() {
  
  printf("Entre %d e %d, temos:\n\n", MIN, MAX);
  
  for (int i=MIN; i<=MAX; i++) {
    int a = i/100; // 2 dig ALTA ordem
    int b = i%100; // 2 dig BAIXA ordem
    
    if ( ((a+b) * (a+b)) == i) {
      printf("%d pois %.2d+%.2d=%d e %d²=%d\n", i, a, b, a+b, a+b, i);
    }
  }

  return 0;
}