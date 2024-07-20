// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C05 -> String
// Problem -> 17
// Finished by 08 Jun 2024


#include <stdio.h>
#include <string.h>


int main() {
  
  char str[1001];
  
  printf("Escreva uma frase:\n");
  fgets(str, 1000, stdin);
  str[strlen(str)-1]='\0';
  
  char res[1001];
  int resIndex=0;
  
  for (int i=0; str[i]!='\0'; i++) {    
    if (str[i]!=' ') {
      res[resIndex] = str[i];
      resIndex++;
    }
  }
  
  res[resIndex] = '\0';
  
  printf("%s", res);

  return 0;
}