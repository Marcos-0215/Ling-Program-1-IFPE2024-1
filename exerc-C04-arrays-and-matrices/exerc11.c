// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 -> VETORES (Arrays)
// Problem -> 11
// Finished by 13 Jun 2024

#include <stdio.h>

int main() {
  
  float numArray[10];
  
  printf("Digite 10 numeros reais:\n");
  
  for (int i=0; i<10; i++) {
    scanf("%f", &numArray[i]);
  }
  
  int neg = 0;
  float somaPos = 0;
  
  for (int i=0; i<10; i++) {
    if (numArray[i]<0) {
      neg++;
    } else {
      somaPos += numArray[i];
    }
  }
  
  printf("\nQuantidade de numeros negativos: %d", neg);
  printf("\nSoma dos numeros positivos: %f", somaPos);
  
  return 0;
}