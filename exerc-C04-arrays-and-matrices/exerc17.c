// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 17
// Finished by 11 Jul 2024


#include <stdio.h>

int main() {
  
  int arr[10];
  
  for (int i=0; i<10; i++) {
    scanf("%d", arr+i);
    if (*(arr+i)<0) {
      *(arr+i) = 0;
    }
  }
  
  for (int i=0; i<10; i++) {
    printf("%d ", *(arr+i));
  }
  
  return 0;
}