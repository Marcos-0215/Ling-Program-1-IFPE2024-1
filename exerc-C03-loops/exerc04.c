// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C03 - COMANDOS DE REPETICAO (Loops)
// Problem -> 04
// Finished by dd mmm 2024

#include <stdio.h>

int main() {
  int n;
  n=0;
  
  while(n<100000) {
    n+=1000;
    printf("%d\n", n);
  }

  return 0;
}
