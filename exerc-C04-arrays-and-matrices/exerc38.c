// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 38
// Finished by dd mmm 2024


#include <stdio.h>

int main() {
      
  int num[11];
  int temp = 0;
  int size = 0;
  
  
  for (int i=0; i<sizeof(num)/sizeof(num[0]); i++) {
    
    printf("Digite um número: ");
    scanf("%d", &num[i]);
    size++;

    for (int k=0; k<size-1; k++) {
        
      for (int j=1; j+k<size; j++) {
        j+=k;
        if (num[k] > num[j]) {
          temp = num[k];
          num[k] = num[j];
          num[j] = temp;
        }
        j-=k;
      }
    }
  }

  printf("\nVetor ordenado: ");
  
  for (int i=0; i<11; i++) {
    printf("%d ", num[i]);
  }

  return 0;
}