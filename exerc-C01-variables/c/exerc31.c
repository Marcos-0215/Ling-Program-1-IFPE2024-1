#include <stdio.h>

int main()
{
int input;
int antec;
int suc;

printf("Digite um número inteiro:\n");
scanf("%d", &input);

antec = input - 1;
suc = input + 1;

printf("\nAntecessor: %d\n", antec);
printf("Sucessor: %d", suc);

return 0;
}