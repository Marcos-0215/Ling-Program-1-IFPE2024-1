// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 07
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {    
  char str[50];
  int qnt=0;
  
  printf("Digite uma string: ");
  scanf("%s", str);
  
  for (int i=0; str[i] !='\0'; i++) {    
    if (str[i] == '1') {
      qnt++;
    }
  }
  
  printf("\nQuantidade de \"1\": %d\n", qnt);

  return 0;
}