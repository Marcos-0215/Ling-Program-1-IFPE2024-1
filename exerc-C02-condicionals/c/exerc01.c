#include <stdio.h>

int main()
{
    float num1;
    float num2;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite outro número: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("\nNúmero maior: %f", num1);
    } else {
        if (num2 > num1) {
        printf("\nNúmero maior: %f", num2);
        } else {
        printf("\nO números são iguais.");
        }
    }

    return 0;
}