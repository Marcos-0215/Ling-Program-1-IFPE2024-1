// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 03
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  float num[10], result[10];
  
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    printf("Digite um número real: ");
    scanf("%f", &num[i]);
  }
  
  for (int i=0; i<sizeof(result)/sizeof(result[0]); i++) {
    result[i] = num[i] * num[i];
  }
  
  printf("\nValores dos números:\n");
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    if (i == sizeof(num)/sizeof(num[0]) - 1) {
      printf("%.2f.\n", num[i]);
      continue;
    }
    printf("%.2f, ", num[i]);
  }
  
  printf("\nValores dos números ao quadrado:\n");
  
  for (int i=0; i<sizeof(result)/sizeof(result[0]); i++) {
    if (i == sizeof(result)/sizeof(result[0]) - 1) {
      printf("%.2f.", result[i]);
      continue;
    }
    printf("%.2f, ", result[i]);
  }
  
  return 0;
}