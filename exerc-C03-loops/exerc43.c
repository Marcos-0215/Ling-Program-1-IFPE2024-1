// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 43
// Finished by 02 Jul 2024

#include <stdio.h>


int main() {
  
  int soma=0, i=0;
  
  while (1) {
    
    int n;
    
    printf("Idade: ");
    scanf("%d", &n);
    
    if (n==0) {
      printf("-------------\n");
      printf("Média = %.2f\n", (float) soma/i);
      break;
    }
    
    soma+=n;
    i++;
    
  }
  
  return 0;
}