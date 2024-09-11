// MINI-AVALIAÇÃO 20/08/2024 FUNCOES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 02:
2) Faça uma função que receba por parâmetro um inteiro positivo e retorne a raiz quadrada desse número.(sem utilizar funções ou operadores de potência prontos). Pense numa estratégia de aproximação.
*/


#include <stdio.h>

float sqrtRootAndre(int n) {
  int inteiro = 1;
  float cent = 0.01;
  
  
  while (inteiro*inteiro < n) {
    inteiro++;
  }
  float resultado = inteiro - 1;
  
  while ((resultado+cent)*(resultado+cent) < n) {
    cent+=0.01;
  }
  resultado = resultado + cent - 0.01;
  
  return resultado;
}


int main() {
  
  int n;
  
  printf("Valor um número inteiro positivo: ");
  scanf("%d", &n);
  
  printf("-------------\n");
  printf("A raiz quadrada de %d é:\n%.2f\n", n, sqrtRootAndre(n));
  
  printf("(Precisão de 2 casa decimais)\n");
  
  
  return 0;
}