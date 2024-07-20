// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 -> String
// Problem -> 14
// Finished by 08 Jun 2024


#include <stdio.h>
#include <string.h>


int main() {
    
  char word[51];
  
  printf("Digite uma palavra (ate 50 letras):\n");
  scanf("%s", word);
  
  for (int i=0; word[i]!='\0'; i++) {    
    //printf("%d\n", i);
    //printf("%c\n", word[i]);
    word[i] += 1;    
  }
  
  printf("%s\n", word);

  return 0;
}