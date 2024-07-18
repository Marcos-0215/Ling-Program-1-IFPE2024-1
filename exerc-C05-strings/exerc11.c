// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 11
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {
  
  char str[50];
  
  printf("Digite uma string: ");
  scanf("%s", str);
  
  printf("\nString sem vogais: ");
  
  for (int i=0; str[i] != '\0'; i++) {
    
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
        
      printf("%c", str[i]);
    }
  }
  
  return 0;
}