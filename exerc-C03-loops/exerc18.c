#include <stdio.h>

int main()
{
  int i, cont;
  float maior = -99999.0;
  
  printf("Digite a quantidade de números a serem lidos: ");
  scanf("%d", &i);
  
  for (i; i>0; i--) {
    float lido;
    
    printf("Digite um número: ");
    scanf("%f", &lido);
    
    if (lido > maior) {
      maior = lido;
      cont = 0;
    }
    
    if (lido == maior) {
      cont ++;
    }
  }
  
  printf("\nMaior número lido: %.1f", maior);
  printf("\nQuantas vezes ele foi lido: %d", cont);
  
  return 0;
}