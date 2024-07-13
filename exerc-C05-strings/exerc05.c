// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 - String
// Problem -> 05
// Finished by ?? ??? 2024


#include <stdio.h>

int main() {  
  char str[50];
  int size=0;
  
  printf("Digite um nome: ");
  scanf("%s", str);
  
  for (int i=0; str[i] !='\0'; i++) {    
    if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
      size++;
    }
  }
  
  printf("\nQuantidade de letras: %d", size);

  return 0;
}