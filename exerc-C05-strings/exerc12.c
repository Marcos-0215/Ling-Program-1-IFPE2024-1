// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 12
// Finished by ?? ??? 2024


#include <stdio.h>

#define VOWEL_CHECK(i) word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U'

int main() {
      
  char word[50];
  int count = 0;
  
  printf("Digite uma palavra: ");
  scanf("%s", word);
  
  for (int i=0; word[i] != '\0'; i++) {
    
    if (VOWEL_CHECK(i)) {
      count++;
    }    
  }
  
  printf("Quantidade de vogais: %d\n\n", count);
  
  char caract;

  printf("Digite um caractere (vogal ou consoante): ");
  getchar(); // limpar o \n do buffer de input
  scanf("%c", &caract);
  
  for (int i=0; word[i] != '\0'; i++) {
    
    if (VOWEL_CHECK(i)) {
      word[i] = caract;
    }
  }
  
  printf("%s", word);
  
  return 0;
}