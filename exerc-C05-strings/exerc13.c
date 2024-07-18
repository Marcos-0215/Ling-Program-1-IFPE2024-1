// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 13
// Finished by ?? ??? 2024


#include <stdio.h>
#include <string.h>

int main() {
  
  char phrase[80];
  int count = 0;
  
  printf("Digite uma frase: ");
  fgets(phrase, 80, stdin);
  phrase[strlen(phrase) - 1] = '\0';
  
  for (int i=0; phrase[i] != '\0'; i++) {
    
    if (phrase[i] == ' ') {
      count++;
    }
  }
  
  //printf("%s\n", phrase);
  printf("\nQuantidade de caracteres brancos: %d", count);
  
  return 0;
}