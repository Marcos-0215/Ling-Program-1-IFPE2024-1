#include <stdio.h>

int main () {
  printf("C02-19 DIVISÍVEL POR 3 OU 5\n");

  int num;

  printf("\nDigite um número inteiro: ");
  scanf("%d", &num);

  if (num%3 == 0 && num%5 == 0) {
    return 0;
  }

  if (num%3 == 0) {
    printf("\nDIVISÍVEL POR 3");
  }

  if (num%5 == 0) {
    printf("\nDIVISÍVEL POR 5");
  }

  return 0;
}