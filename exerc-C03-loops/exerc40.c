// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 40
// Finished by 30 Jun 2024

#define QNT 100

#include <stdio.h>

int main() {
  
  int n[QNT];
  int nIdx;
  
  for (int i=0; i<QNT; i++) {
    scanf("%d", &n[i]);
    nIdx = i;
    
    if (n[i]<0) {
      break;
    }
    
  }
  
  int min = n[0];
  int max = n[0];
  
  for (int i=1; i<nIdx; i++) {
    if (n[i]>max) {
      max = n[i];
    }
    
    if (n[i]<min) {
      min = n[i];
    }
    
  }
  
  printf("\n");
  printf("Maior número lido: %d\n", max);
  printf("Menor número lido: %d\n", min);
  
  
  return 0;
}