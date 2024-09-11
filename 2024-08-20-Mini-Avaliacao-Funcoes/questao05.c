// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 05:
5) Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.
*/


#include <stdio.h>

int fatByLoop(int n) {
  int res=1;
  for (int i=1; i<=n; i++) {
    res*=i;
  }
  return res;
}


int main() {
 
  int n;
  
  printf("Valor um número inteiro positivo: ");
  scanf("%d", &n);
  
  printf("-------------\n");
  
  printf("Fatorial de %d = %d\n", n, fatByLoop(n));

  
  
  return 0;
}