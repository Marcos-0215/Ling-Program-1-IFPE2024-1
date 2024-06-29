// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 31
// Finished by 17 May 2024

#include <stdio.h>

int main() {
    
  int n=50;
  float s=0;
  
  for (int i=1; i<=n; i++) {
      
    s+= ((float)2*i-1)/i;
      
  }
  
  printf("%f\n", s);
    
  return 0;
}