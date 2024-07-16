// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 37
// Finished by dd mmm 2024

#include <stdio.h>

int main() {
      
  float num[11] = {2, 4, 6, 9, 47, 50, 48, 35, 9, 5, 2};
  float temp = 0;
  
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    for (int j=1; j+i<11; j++) {
      j+=i;
      if (num[i] > num[j]) {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
      j-=i;
    }
    
  }

  printf("\nVetor ordenado: ");
  
  for (int i=0; i<11; i++) {
    printf("%.2f ", num[i]);
  }

  return 0;
}