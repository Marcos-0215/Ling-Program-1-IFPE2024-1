// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 04:
4) Faça uma função que leia 50 valores inteiros e retorna o maior deles.
*/


#include <stdio.h>

int ler50retornarMaior() {
  int n;
  printf("Numero 01: ");
  scanf("%d", &n);
  int max = n;
  
  for (int i=0; i<49; i++) {
    printf("Numero %.2d: ", i+2);
    scanf("%d", &n);
    if (n>max) {
      max = n;
    }
  }
  printf("---------\n");
  return max;
}


int main() {
  
  printf("Digite 50 números inteiros abaixo.\n");
  
  printf("Maior valor = %d\n", ler50retornarMaior());
  
  
  return 0;
}