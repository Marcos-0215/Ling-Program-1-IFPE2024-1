// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 22
// Finished by 14 Jul 2024

#include <stdio.h>

int main() {
  
  int a[10], b[10];
  
  printf("Vetor A (10 números inteiros):\n");
  for(int i=0; i<10; i++) {
    scanf("%d", a+i);
  }
  
  printf("Vetor B (10 números inteiros):\n");
  for(int i=0; i<10; i++) {
    scanf("%d", b+i);
  }
  
  printf("------\n");
  
  int c[10];
  
  for (int i=0; i<10; i++) {
    if ((i+1)%2==0) {
      c[i]=a[i];
    } else {
      c[i]=b[i];
    }
    printf("%d ", c[i]);
  }
  
  return 0;
}