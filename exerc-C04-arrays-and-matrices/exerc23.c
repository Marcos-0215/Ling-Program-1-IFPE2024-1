// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 23
// Finished by 15 Jul 2024

#include <stdio.h>

int main() {
  
  float vet1[5];
  float vet2[5];
  
  printf("Conjunto 1:\n");
  for(int i=0; i<5; i++){
    scanf("%f", &vet1[i]);
  }
  
  printf("Conjunto 2:\n");
  for(int i=0; i<5; i++){
    scanf("%f", &vet2[i]);
  }
  
  printf("-------------\n");
  
  for(int i=0; i<5; i++){
    printf("%f ", vet1[i]);
  }
  
  printf("\n-------------\n");
  for(int i=0; i<5; i++){
    printf("%f ", vet2[i]);
  }
  
  printf("\n-------------\n");
  
  float resultado = 0;
  
  for(int i=0; i<5; i++){
    resultado += vet1[i] * vet2[i];
  }
  
  printf("Produto Escalar: %f\n", resultado);
  
  return 0;
}