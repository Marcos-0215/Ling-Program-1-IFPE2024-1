#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um número inteiro:\n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("\nNúmero inválido.");
    } else {
        printf("\nLogaritmo na base 2: %.2f", log2(num));
    }

    return 0;
}