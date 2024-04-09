#include <stdio.h>

int main()
{
    printf("C02-40 CUSTO CONSUMIDOR\n\n");

  
    float custo;
    
    printf("Digite o custo de fábrica do carro novo: ");
    scanf("%f", &custo);
    
    if (custo > 25000.0) {
        printf("\nCusto ao consumidor: R$ %.2f", custo * (1 + 0.15 + 0.2));
    } else if (custo >= 12000.0) {
        printf("\nCusto ao consumidor: R$ %.2f", custo * (1 + 0.1 + 0.15));
    } else if (custo > 0.0) {
        printf("\nCusto ao consumidor: R$ %.2f", custo * (1 + 0.05 + 0));
    } else {
        printf("\nValor inválido.");
        return 1;
    }
    

    return 0;
}