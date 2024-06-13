#include <stdio.h>
#include <math.h>

int main()
{
    // C02 - 04

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("\nElevado ao quadrado: %f", pow(num, 2));
        printf("\nRaiz quadrada: %f", sqrt(num));
    } else {
        printf("\nO número não é positivo");
    }

    return 0;
}