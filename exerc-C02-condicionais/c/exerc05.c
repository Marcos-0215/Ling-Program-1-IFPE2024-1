#include <stdio.h>

int main()
{
    // C02 - 05

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("\nNúmero PAR.");
    } else {
        printf("\nNúmero ÍMPAR.");
    };

    return 0;
}