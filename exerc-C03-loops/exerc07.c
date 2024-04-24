#include <stdio.h>

int main()
{
  float num, cont;

  for (int i=1; i<=10; i++) {
    int lido;
    printf("Digite o %dº inteiro: ", i);
    scanf("%d", &lido);
    
    if (lido > 0) {
      num = num + lido;
      cont++;
    }
    
  }
  
  printf("Média: %.2f", num/cont);
  
  return 0;
}