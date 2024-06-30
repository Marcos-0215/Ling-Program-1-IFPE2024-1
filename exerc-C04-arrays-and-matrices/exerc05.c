// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 05
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
      
  int num[10];
  int count;
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    if (num[i]%2 == 0) {
      count++;
    }
  }
  
  printf("Quantidade de valores pares: %d", count);
  
  return 0;
}