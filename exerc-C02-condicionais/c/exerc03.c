#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("\nRaiz quadrada: %f", sqrt(num));
    } else {
        printf("\nElevado ao quadrado: %f", pow(num, 2));
    }

    return 0;
}