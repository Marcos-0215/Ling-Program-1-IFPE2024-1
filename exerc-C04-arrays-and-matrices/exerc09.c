// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 09
// Finished by ?? ?? 2024

#include <stdio.h>

int main() {
    
  int conj[6];
  int num;
  int i=0;
  
  printf("Digite 6 valores inteiros pares: ");
  
  while (i < 6) {
    
    scanf("%d", &num);
    
    if (num%2==0) {
      conj[i] = num;
      i++;
    } else {
      printf("Aviso: o número tem que ser par.\n");
    }
    
  }
  
  printf("\nEm ordem inversa:\n");
  
  for (int j=5; j>=0; j--) {
    printf("%d  ", conj[j]);
  }
  
  return 0;
}