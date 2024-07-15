// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 19
// Finished by 12 Jul 2024

#include <stdio.h>

int main() {
  
  int arr[50];
  
  for (int i=0; i<50; i++) {
    *(arr+i) = (i+5*i)%(i+1);
  }
  
  for (int i=0; i<50; i++) {
    printf("%d | ", *(arr+i));
  }
  
  
  return 0;
}