#include <stdio.h>

int main()
{
// 39

float premio = 780000.00;

printf("As quantias ganhas para cada um dos 3 ganhadores são:\n");

printf("\nPrimeiro ganhador -> R$ %.2f", premio * 0.46);
printf("\nSegundo ganhador -> R$ %.2f", premio * 0.32);
printf("\nTerceiro ganhador -> R$ %.2f", premio * (1 - 0.46 - 0.32));

return 0;
}