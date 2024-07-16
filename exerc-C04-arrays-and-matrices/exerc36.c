// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 36
// Finished by dd mmm 2024

#include <stdio.h>

int main() {
    
  float num[10] = {765, 765, 767, 345, 567, 50, 4, 78, 16.78, 10};
  float temp = 0;
  
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    for (int j=1; j+i<10; j++) {
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
  
  for (int i=0; i<10; i++) {
    printf("%.2f ", num[i]);
  }

  return 0;
}