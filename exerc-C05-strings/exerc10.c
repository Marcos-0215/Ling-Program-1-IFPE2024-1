// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 10
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {
      
  char str[50];
  int last;

  printf("Digite uma palavra: ");
  scanf("%s", str);
  
  for (int i=0; str[i] != '\0'; i++) {
    last = i;
  }
  
  printf("\nDe trás para frente:\n");
  
  for (int i=last; i>=0; i--) {
    printf("%c", str[i]);
  }
  
  return 0;
}