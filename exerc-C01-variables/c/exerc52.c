#include <stdio.h>
#include <math.h>

int main()
{
  // 52
  
  float jog1;
  float jog2;
  float jog3;
  float premio;
  
  printf("3 amigos jogaram na loteria.\n");
  
  printf("\nQuanto o jogador 1 apostou: R$ ");
  scanf("%f", &jog1);
  printf("Quanto o jogador 2 apostou: R$ ");
  scanf("%f", &jog2);
  printf("Quanto o jogador 3 apostou: R$ ");
  scanf("%f", &jog3);
  
  printf("O valor do prêmio: R$ ");
  scanf("%f", &premio);
  
  printf("\nO quanto cada jogador ganha do prêmio:");
  printf("\nJogador 1: R$ %.2f", (jog1/(jog1+jog2+jog3))*premio);
  printf("\nJogador 2: R$ %.2f", (jog2/(jog1+jog2+jog3))*premio);
  printf("\nJogador 3: R$ %.2f", (jog3/(jog1+jog2+jog3))*premio);

  return 0;
}