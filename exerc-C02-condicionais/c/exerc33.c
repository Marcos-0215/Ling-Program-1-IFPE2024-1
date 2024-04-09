#include <stdio.h>

int main()
{
    printf("C02-33 TABELA DE AUMENTO\n\n");
    
    float preco;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    if (preco < 50.0) {
        preco *= 1.05;
        printf("\nPreço novo: R$ %.2f\n", preco);
        printf("(Aumento de 5%%)");
    } else if (preco >= 50.0 && preco <= 100.0) {
        preco *= 1.1;
        printf("\nPreço novo: R$ %.2f\n", preco);
        printf("(Aumento de 10%%)");
    } else {
        preco *= 1.15;
        printf("\nPreço novo: R$ %.2f\n", preco);
        printf("(Aumento de 15%%)");
    }
    
    if (preco <= 80.0) {
        printf("\nMsg: Barato.");
    }
    if (preco > 80.0 && preco <= 120.0) {
        printf("\nMsg: Normal.");
    }
    if (preco > 120.0 && preco <= 200.0) {
        printf("\nMsg: Caro.");
    }
    if (preco > 200.0) {
        printf("\nMsg: Muito caro.");
    }
    
    return 0;
}