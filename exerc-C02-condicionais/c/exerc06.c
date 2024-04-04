#include <stdio.h>

int main()
{
    // C02 - 06

    int num1;
    int num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("\nNúmero maior: %d", num1);
        printf("\nDiferença: %d", num1 - num2);
    } else {
        printf("\nNúmero maior: %d", num2);
        printf("\nDiferença: %d", num2 - num1);
    }

    return 0;
}