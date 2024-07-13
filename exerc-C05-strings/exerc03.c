// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 03
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {
    
  char name1[50], name2[50];
  int result = 1;
  
  printf("Digite uma string: ");
  scanf("%s", name1);
  printf("Digite outra string: ");
  scanf("%s", name2);

  for (int i=0; i<50; i++) {    
    if (name1[i] != name2[i]) {
      result = 0;
    }    
  }
  
  printf("\nResultado (1 para igual, 0 para diferente):\n%d", result);
  
  return 0;
}