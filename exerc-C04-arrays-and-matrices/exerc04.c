// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 04
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  float num[8];
  int x, y;
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número: ");
    scanf("%f", &num[i]);
  }
  
  printf("Digite uma posição X: ");
  scanf("%d", &x);
  printf("Digite uma posição Y: ");
  scanf("%d", &y);
  
  printf("Soma dos números nas %dª e %dª posições: %.2f", x, y, num[x-1] + num[y-1]);
  
  return 0;
}