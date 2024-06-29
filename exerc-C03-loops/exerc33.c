// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 33
// Finished by 15 Jun 2024


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
  int n, i, j;
  
  printf("Digite n (numero inteiro positivo):\n");
  scanf("%d", &n);
  printf("Digite i e j (numeros inteiros positivos):\n");
  scanf("%d %d", &i, &j);
  
  int count = 0;
  int index=0;
  
  printf("\nResultado:\n");
  
  while (count<n) {
      
    if (index%i==0 || index%j==0) {
        
      if (count<n-1) {
        printf("%d, ", index);
        count++;
      } else {
        printf("%d.", index);
        count++;
      }
    }
    
    index++;
  }
  
  return 0;
}