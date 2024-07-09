// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 58
// Finished by 08 Jul 2024

#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main() {
  
  int a, b;
  
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  
  int sum=0;
  
  if (a<2) {
    a=2;
  }
  
  for (int i=a; i<=b; i++) {
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
  printf("Soma dos primos entre %d e %d:\n%d", a, b, sum);
  
  
  return 0;
}