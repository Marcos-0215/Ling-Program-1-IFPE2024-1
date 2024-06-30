// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 08
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  int num[6];

  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número: ");
    scanf("%d", &num[i]);
  }
  
  printf("\nVetor em ordem inversa: ");

  
  for (int i=5; i>=0; i--) {
    printf("%d ", num[i]);
  }
  
  return 0;
}