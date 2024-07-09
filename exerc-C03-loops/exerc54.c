// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 54
// Finished by 08 Jul 2024

#include <stdio.h>
#include <stdbool.h>


int main() {
  
  int n;
  scanf("%d", &n);
  
  bool prime = true;
  
  for (int i=2; i<n; i++) {
    if (n%i==0) {
      prime = false;
    }
  }
  
  printf("-------------\n");
  
  if (prime) {
    printf("%d é primo", n);
  } else {
    printf("%d não é primo", n);
  }
  
  
  return 0;
}