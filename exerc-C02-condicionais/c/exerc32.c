#include <stdio.h>

int main()
{
    printf("C02-32 PEDIDO LANCHONETE\n\n");
    
    int cod, qnt;


    printf("CARDÁPIO\n");
    printf("[Cod 100] Cachorro Quente -> R$ 1,20/unid\n");
    printf("[Cod 101] Bauru Simples -> R$ 1,30/unid\n");
    printf("[Cod 102] Bauru com Ovo -> R$ 1,50/unid\n");
    printf("[Cod 103] Hamburguer -> R$ 1,20/unid\n");
    printf("[Cod 104] Cheeseburguer -> R$ 1,70/unid\n");
    printf("[Cod 105] Suco -> R$ 2,20/unid\n");
    printf("[Cod 106] Refrigerante -> R$ 1,00/unid\n");
    
    printf("\nDigite o código do produto escolhido: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%d", &qnt);
    
    
    switch (cod) {
        case 100:
            printf("\nValor: R$ %.2f", 1.2*qnt);
            break;
        case 101:
            printf("\nValor: R$ %.2f", 1.3*qnt);
            break;
        case 102:
            printf("\nValor: R$ %.2f", 1.5*qnt);
            break;
        case 103:
            printf("\nValor: R$ %.2f", 1.2*qnt);
            break;
        case 104:
            printf("\nValor: R$ %.2f", 1.7*qnt);
            break;
        case 105:
            printf("\nValor: R$ %.2f", 2.2*qnt);
            break;
        case 106:
            printf("\nValor: R$ %.2f", 1.0*qnt);
            break;
        default:
            printf("Digite um código válido.");
    }

    return 0;
}