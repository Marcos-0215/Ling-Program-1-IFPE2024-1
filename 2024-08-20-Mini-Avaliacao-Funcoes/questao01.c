// MINI-AVALIAÇÃO 20/08/2024 FUNÇÕES
// LINGUAGEM DE PROGRAMACAO (Prof Marco Domingues)

/*
QUESTÃO 01:
1)  Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X elevado a z . (sem utilizar funções ou operadores de potência prontos)
*/


#include <stdio.h>

float powAndre(float base, int expoente) {
  
  if (expoente==0) {
    return 1;
  }
  if (expoente>0) {
    return base * powAndre(base, expoente-1);
  } else {
    return 1/base * powAndre(base, expoente+1);
  }
  
}


int main() {
  
  float x;
  int y;
  
  printf("Valor de x: ");
  scanf("%f", &x);
  printf("Valor de y (inteiro): ");
  scanf("%d", &y);
  
  printf("---------\n");
  
  printf("RESULTADO (de %.2f elevado a %d)\n= %.4f\n", x, y, powAndre(x, y));
  
  return 0;
}