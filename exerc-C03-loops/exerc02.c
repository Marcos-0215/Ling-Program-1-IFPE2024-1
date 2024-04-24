#include <stdio.h>

int main()
{
  int num;
  
  for (int i=1; i<=100; i++) {
    printf("%d ", i);
  }
  
  printf("\n\n");

  int j;
  
  while (j<100) {
    j += 1;
    printf("%d ", j);
  }
  
  printf("\n\n");

  int k;
  
  do {
    k += 1;
    printf("%d ", k);
  } while (k < 100);
  
  return 0;
}