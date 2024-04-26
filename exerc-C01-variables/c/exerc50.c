#include <stdio.h>

int main()
{
  int idade ;
  int anoAtual;
  int anoNasc;
  
  printf("Digite a sua idade (em anos): ");
  scanf("%d", &idade);
  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);
  
  anoNasc = anoAtual - idade;
  
  printf("\nAno de nascimento: %d", anoNasc);

  return 0;
}