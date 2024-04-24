#include <stdio.h>

int main()
{
  float maior = -99999, menor = 99999;
  
  for (int i=1; i<=10; i++) {
    float lido;
    
    printf("Digite o %dº número: ", i);
    scanf("%f", &lido);
    
    if (lido > maior) {
      maior = lido;
    }
    
    if (lido < menor) {
      menor = lido;
    }
  }
  
  printf("\nMAIOR: %.1f", maior);
  printf("\nMENOR: %.1f", menor);
  
  return 0;
}