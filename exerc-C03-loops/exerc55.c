// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 55
// Finished by 08 Jul 2024

#include <stdio.h>
#include <stdbool.h>


int main() {
  
  int n;
  scanf("%d", &n);
  
  int sum=0;
  
  for (int i=2; i<=n; i++) {
    bool prime = true;
    
    for (int j=2; j<i; j++) {
      if (i%j==0) {
        prime = false;
      }
    }
    
    if (prime) {
      sum+=i;
    }
    
  }
  
  printf("-------------\n");
  printf("Soma: %d", sum);
  
  
  return 0;
}