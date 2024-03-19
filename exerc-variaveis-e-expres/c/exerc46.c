#include <stdio.h>

int main()
{
// 46

int num;
int dig1;
int dig2;
int dig3;

printf("Digite um número inteiro positivo de 3 dígitos:\n");
scanf("%d", &num);

dig1 = num / 100;
dig2 = (num - dig1*100) / 10;
dig3 = (num - dig1*100 - dig2*10);

printf("\nDígitos invertidos: %d%d%d", dig3, dig2, dig1);

return 0;
}