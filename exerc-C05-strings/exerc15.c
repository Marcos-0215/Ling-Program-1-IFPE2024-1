// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 -> String
// Problem -> 15
// Finished by 08 Jun 2024


#include <stdio.h>
#include <string.h>

int main() {
    
  char str[101];
  
  printf("Digite caracteres minusculos (ate 100):\n");
  scanf("%s", str);
  
  for (int i=0; str[i]!='\0'; i++) {    
    str[i] -= 32;    
  }
  
  printf("%s\n", str);

  return 0;
}