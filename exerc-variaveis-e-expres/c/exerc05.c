#include <stdio.h>
#include <stdlib.h>

int main () {

  // 5. Leia um número real e imprima a quinta parte deste número.

  float num = 0.0;
  
  printf("Let's discover the fifth part of a number!\n");

  printf("\nEnter a real number: ");
  scanf("%f", &num);

  printf("\nIts fifth part is: %f", num / 5);

  return 0;
}