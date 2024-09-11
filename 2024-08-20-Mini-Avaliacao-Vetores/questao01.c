// MINI-AVALIAÇÃO 20/08/2024 VETORES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 01:
1) Criar uma função que receba um vetor de caracteres (palavra, vetor de char) e retorne a quantidade de caracteres (int)?
*/


#include <stdio.h>

int contarCaracteres(char palavra[51]) {
  int len = 0;
  for (int i=0; palavra[i]!='\0'; i++) {
    len++;
  }
  return len;
}


int main() {
  
  char palavra[51];
  printf("Digite uma palavra (até 50 caracteres): ");
  scanf("%s", palavra);
  
  printf("---------------\n");
  printf("Quantidade de caracteres = %d\n", contarCaracteres(palavra));
  
  return 0;
}