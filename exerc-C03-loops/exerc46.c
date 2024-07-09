// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 46
// Finished by 04 Jul 2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 1000

int main() {
  
  int count=0;
  srand(time(NULL));
  int random = rand()%(MAX-MIN+1)+MIN;
  
  while (1) {
    
    int guess;
    printf("Digite seu chute (%d a %d): ", MIN, MAX);
    scanf("%d", &guess);
    
    count++;
    printf("----------------------------\n");
    
    if (guess==random) {
      printf("VC ACERTOU! O número sorteado foi %d!\n", random);
      printf("Você usou %d tentativas.\n", count);
      break;
    } else if (guess>random) {
      printf("Seu chute foi ALTO!\nTente novamente.\n");
    } else {
      printf("Seu chute foi BAIXO!\nTente novamente.\n");
    }
    
    printf("=====================================\n");
    
  }
  
  return 0;
}