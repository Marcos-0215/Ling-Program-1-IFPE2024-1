// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 06
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  int num[10];
  int maior = -99999, menor = 999999;
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    if (num[i] > maior) {
      maior = num[i];
    }
    
    if (num[i] < menor) {
      menor = num[i];
    }
  }
  
  printf("\nMaior número: %d", maior);
  printf("\nMenor número: %d", menor);
  
  return 0;
}