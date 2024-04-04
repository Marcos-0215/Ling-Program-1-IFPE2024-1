#include <stdio.h>

int main()
{
    float baseMaior, baseMenor, altura;

    printf("[C02-17] CÁLCULO DA ÁREA DE UM TRAPÉZIO\n\n");

    printf("Digite o valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    if (baseMaior > 0 && baseMenor > 0) {
        printf("\n\nA área deste trapézio é: %.2f", ((baseMaior+baseMenor)*altura)/2);
    } else {
        printf("\nDigite números maiores que zero para a base maior e menor.");
    }
    return 0;
}