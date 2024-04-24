#include <stdio.h>

int main()
{
  int i = 10;
  
  while (i>=0) {
    printf("%d\n", i);
    i -= 1;
  }
  
  printf("FIM!");
  
  return 0;
}