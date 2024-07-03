// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 44
// Finished by 02 Jul 2024

#include <stdio.h>

int main() {
  
  int n;
  
  printf("Digite numero inteiro positivo: ");
  scanf("%d", &n);
  
  printf("------------\n");
  printf("Sequência Fibonacci:\n");
  
  printf("0 1 ");
  
  int last1=0;
  int last2=1;
  int fib;
  
  while (1) {
    fib =last1 + last2;
    last1 = last2;
    last2 = fib;
    
    printf("%d ", fib);
    
    if (fib>n) {
      break;
    }
    
  }
  
  return 0;
}