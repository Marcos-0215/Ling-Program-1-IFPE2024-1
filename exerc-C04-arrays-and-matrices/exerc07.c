// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 07
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  int num[10];
  int maior = -99999, pos;
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    if (num[i] > maior) {
      maior = num[i];
      pos = i;
    }
  }
  
  printf("\nVetor: ");

  
  for (int i=0; i<10; i++) {
    printf("%d ", num[i]);
  }
  
  printf("\nMaior número: %d", maior);
  printf("\nPosição: %dº", pos+1);
  
  return 0;
}