// MINI-AVALIAÇÃO 20/08/2024 VETORES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 02:
2) Criar uma função que receba um vetor de caracteres (frase, vetor de char) e retorne a quantidade de palavras(int)?
*/


#include <stdio.h>
#include <string.h>

int contarPalavras(char frase[101]) {
  int words = 0;
  for (int i=0; frase[i]!='\0'; i++) {
    if (frase[i]==' ') {
      words++;
    }
  }
  return words+1;
}


int main() {
  
  char frase[101];
  printf("Digite uma frase (até 100 caracteres): ");
  fgets(frase, 100, stdin);
  frase[strlen(frase)-1] = '\0';
  
  
  printf("---------------\n");
  printf("Quantidade de palavras = %d\n", contarPalavras(frase));
  
  return 0;
}