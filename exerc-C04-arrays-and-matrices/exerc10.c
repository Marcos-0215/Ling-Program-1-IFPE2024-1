// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 10
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
  
  float notas[15];
  int count=0;
  
  for (int i=0; i<15; i++) {
    scanf("%f", &notas[i]);
    count++;
  }
  
  float sum=0;
  
  
  for (int i=0; i<sizeof(notas)/sizeof(notas[0]); i++) {
    sum+=notas[i];
  }
  
  printf("\nMédia das %d notas: %.2f", count, sum/count);
  
  return 0;
}