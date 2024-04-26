#include <stdio.h>
#include <stdlib.h>

int main () {

  // 4. Leia um número real e imprima o resultado do quadrado desse número.

  float num = 0.0;
  

  printf("Let's get a number squared!\n");

  printf("\nEnter a real number: ");
  scanf("%f", &num);

  printf("\nSquared, the result is: %f", num * num);

  return 0;
}