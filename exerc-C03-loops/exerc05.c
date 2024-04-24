#include <stdio.h>

int main()
{
  float num;

  for (int i=1; i<=10; i++) {
    float lido;
    printf("Digite o %dº valor: ", i);
    scanf("%f", &lido);
    
    num = num + lido;
  }
  
  printf("\nSoma: %.2f", num);
  
  return 0;
}