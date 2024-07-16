// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 30
// Finished by 15 Jul 2024

#include <stdio.h>

int main() {
  
  int vet1[10];
  int vet2[10];
  
  printf("Digite elementos do Vetor 1:\n");
  for(int i=0; i<10; i++){
    scanf("%d", &vet1[i]);
  }
  
  printf("Digite elementos do Vetor 2:\n");
  for(int i=0; i<10; i++){
    scanf("%d", &vet2[i]);
  }
  
  int final[10];
  int count=0;
  
  
  for (int i=0; i<10; i++) {
    
    for (int j=0; j<10; j++) {
      
      if (vet1[i] == vet2[j]) {
        final[count] = vet1[i];
        count++;
        break;
      }
    }
    
    for (int k=0; k<count-1; k++) {
      if (final[k]==vet1[i]) {
        count--;
      }
    }
    
  }
  
  printf("-------------\n");
  
  for (int i=0; i<count; i++) {
    printf("%d ", final[i]);
  }
  
  return 0;
}