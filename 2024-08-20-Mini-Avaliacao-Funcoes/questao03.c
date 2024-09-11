// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 03:
3)Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.                                                                                                                                                                         S = 1 + 1/1! + ½! + 1/3! + 1 /N!
*/


#include <stdio.h>

int fat(int x) {
  if (x==0) {
    return 1;
  }
  return x * fat(x-1);
}

float calcularS(int n) {
  
  if (n==0) {
    return 0;
  }
  return 1/(float) fat(n) + calcularS(n-1);
  
}


int main() {
  
  int n;
  
  printf("Valor um número inteiro positivo: ");
  scanf("%d", &n);
  
  printf("-------------\n");
  
  printf("Valor de S = %f\n", calcularS(n));
  
  
  return 0;
}