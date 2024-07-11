// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 61
// Finished by 10 Jul 2024

#include <stdio.h>
#include <math.h>

#define MIN 100
#define MAX 999

int main() {
  
  int prod;
  int maior=0;
  int idx1, idx2;
  
  for (int i=MIN; i<=MAX; i++) {
    
    for (int j=MIN; j<=MAX; j++) {
      
      prod = i*j;
      
      if (prod<100000 && prod%10 == prod/10000 && (prod%100)/10 == (prod/1000)%10) {
        if (prod>maior) {
          maior = prod;
          idx1 = i;
          idx2 = j;
        }
      } else if (prod%10 == prod/100000 && (prod%100)/10 == (prod/10000)%10 && (prod%1000)/100 == (prod/1000)%10) {
        
        if (prod>maior) {
          maior = prod;
          idx1 = i;
          idx2 = j;
        }
        
      }
      
    }
    
  }
  
  printf("%d\n(que é o produto de %d * %d)\n", maior, idx1, idx2);
  
  return 0;
}