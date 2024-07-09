// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 48
// Finished by 05 Jul 2024

#include <stdio.h>

#define MAX 4000000

int main() {
  
  int fib=1, sum=0;
  
  int last1=0, last2=1;
  
  while (fib<MAX) {
    
    //printf("%d ", fib);
    
    if (fib%2==0) {
      sum+=fib;
    }
    
    last1 = last2;
    last2 = fib;
    fib = last1+last2;
    
  }
  
  //printf("\n");
  printf("%d", sum);
  
  return 0;
}