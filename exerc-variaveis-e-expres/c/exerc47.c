#include <stdio.h>

int main()
{
// 47

int num;
int dig1;
int dig2;
int dig3;
int dig4;

printf("Digite um número inteiro positivo de 4 dígitos:\n");
scanf("%d", &num);

dig1 = num / 1000;
dig2 = (num - dig1*1000) / 100;
dig3 = (num - dig1*1000 - dig2*100) / 10;
dig4 = num - dig1*1000 - dig2*100 - dig3*10;

printf("\nDígitos (um por linha):\n%d", dig1);
printf("\n%d", dig2);
printf("\n%d", dig3);
printf("\n%d", dig4);

return 0;
}