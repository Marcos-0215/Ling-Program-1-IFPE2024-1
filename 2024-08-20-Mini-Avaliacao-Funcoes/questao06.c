// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 06:
6) Faça uma função recursiva que receba um valor inteiro e positivo e calcule o seu fatorial. (Veja o código da aula mas não copie. Tente fazer com seu entendimento)
*/


#include <stdio.h>

int fatByRecursion(int n) {
  if (n==0) {
    return 1;
  }
  return n * fatByRecursion(n-1);
}


int main() {
 
  int n;
  
  printf("Valor um número inteiro positivo: ");
  scanf("%d", &n);
  
  printf("-------------\n");
  
  printf("Fatorial de %d = %d\n", n, fatByRecursion(n));

  
  
  return 0;
}