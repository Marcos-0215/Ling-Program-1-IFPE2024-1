// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 18
// Finished by 11 Jul 2024


#include <stdio.h>

int main() {
  
  int arr[10], n;
  
  printf("Elementos do vetor:\n");
  for (int i=0; i<10; i++) {
    scanf("%d", arr+i);
  }
  
  printf("n: ");
  scanf("%d", &n);
  
  int count=0;
  
  printf("-----------\n");
  
  for (int i=0; i<10; i++) {
    if (*(arr+i) % n == 0) {
      printf("%d ", *(arr+i));
      count++;
    }
    
    
  }
  
  printf("\nContagem: %d\n", count);
  
  return 0;
}