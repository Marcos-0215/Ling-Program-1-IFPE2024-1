#include <stdio.h>

int main()
{
    printf("C02-31 CLASSIFICAÇÃO DE PESO\n\n");
    
    float alt, peso;

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (m): ");
    scanf("%f", &alt);
    
    if (peso < 60.0) {
        if (alt < 1.2) {
            printf("\nClassificação: A");
        }
        if (alt >= 1.2 && alt <= 1.7) {
            printf("\nClassificação: B");
        }
        if (alt > 1.7) {
            printf("\nClassificação: C");
        }
    }
    
    if (peso >= 60.0 && peso <= 90.0) {
        if (alt < 1.2) {
            printf("\nClassificação: D");
        }
        if (alt >= 1.2 && alt <= 1.7) {
            printf("\nClassificação: E");
        }
        if (alt > 1.7) {
            printf("\nClassificação: F");
        }
    }
    
    if (peso > 90.0) {
        if (alt < 1.2) {
            printf("\nClassificação: G");
        }
        if (alt >= 1.2 && alt <= 1.7) {
            printf("\nClassificação: H");
        }
        if (alt > 1.7) {
            printf("\nClassificação: I");
        }
    }

    return 0;
}