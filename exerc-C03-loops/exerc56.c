// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 56
// Finished by 08 Jul 2024

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
  
  int n=2000000;
  
  long long int sum=0;
  
  for (int i=2; i<=n; i++) {
    bool prime = true;
    int square = (int) sqrt(i);
    
    for (int j=2; j<=square; j++) {
      if (i%j==0) {
        prime = false;
        break;
      }
    }
    
    if (prime) {
      sum+=i;
    }
    
  }
  
  printf("-------------\n");
  printf("Soma: %lld", sum);
  
  
  return 0;
}