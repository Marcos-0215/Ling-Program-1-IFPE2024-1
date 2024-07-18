// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 09
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {
    
  char str[50];

  printf("Digite uma string: ");
  scanf("%s", str);
  
  if (str[0] == 'a' || str[0] == 'A') {
    printf("\nNome: %s", str);
  } else {
    printf("\nInválido.");
  }
  
  return 0;
}