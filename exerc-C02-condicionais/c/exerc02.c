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
        printf("\nO número é inválido.");
    }

    return 0;
}