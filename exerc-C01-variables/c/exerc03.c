#include <stdio.h>
#include <stdlib.h>

int main () {

  // 3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

  int first = 0;
  int second = 0;
  int third = 0;

  printf("Let's add 3 integers (whole numbers) together!\n");

  printf("\nFirst enter the first integer: ");
  scanf("%d", &first);

  printf("Now enter the second integer: ");
  scanf("%d", &second);

  printf("Finally enter the third integer: ");
  scanf("%d", &third);

  printf("\nWhen added, they result in: %d", first + second + third);

  return 0;
}