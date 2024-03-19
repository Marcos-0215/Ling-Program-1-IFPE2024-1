#include <stdio.h>

int main()
{
// 45

char letra;

printf("Digite uma letra maiúscula, para ser transformada em minúscula:\n");
scanf("%c", &letra);

letra = letra + 32;

printf("\nAqui: %c", letra);

return 0;
}