#include <stdio.h>

int main()
{
  int num;
  
  for (int i=0; i<5;i++) {
    num += 3;
    printf("%d\n", num);
  }
  
  return 0;
}