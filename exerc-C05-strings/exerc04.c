// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 04
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {   
  char str[50];
  
  printf("Digite um nome: ");
  scanf("%s", str);
  
  for (int i=0; i<4; i++) {    
    if (str[i] != '\0') {      
      printf("%c", str[i]);
    }
  }
  
  return 0;
}