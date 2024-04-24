#include <stdio.h>

int main()
{
  float num;

  for (int i=1; i<=10; i++) {
    int lido;
    printf("Digite o %dº inteiro: ", i);
    scanf("%d", &lido);
    
    num = num + lido;
  }
  
  printf("Média: %.2f", num/10);
  
  return 0;
}