// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 16
// Finished by 05 Jul 2024

#include <stdio.h>

int main() {
  
  float arr[5];
  int cod;
  
  printf("Vetor:\n");
  for (int i=0; i<5; i++) {
    scanf("%f", &arr[i]);  
  }
  
  printf("Código: ");
  scanf("%d", &cod);
  
  printf("---------\n");
  
  if (cod==0) {
    return 1;
  } else if (cod==1) {
    for (int i=0; i<5; i++) {
      printf("%f ", arr[i]);
    }
  } else if (cod==2) {
    for (int i=4; i>=0; i--) {
      printf("%f ", arr[i]);
    }
  } else {
    printf("Código inválido.\n");
  }
  
  
  return 0;
}