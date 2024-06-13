#include <stdio.h>

int main()
{
    float venda;
    
    printf("Digita o valor da venda mensal: ");
    scanf("%f", &venda);
    
    if (venda >= 100000.0) {
        printf("Comissão: R$ %.2f", 700 + venda*0.16);
    } else if (venda >= 80000.0) {
        printf("Comissão: R$ %.2f", 650 + venda*0.14);
    } else if (venda >= 60000.0) {
        printf("Comissão: R$ %.2f", 600 + venda*0.14);
    } else if (venda >= 40000.0) {
        printf("Comissão: R$ %.2f", 550 + venda*0.14);
    } else if (venda >= 20000.0) {
        printf("Comissão: R$ %.2f", 500 + venda*0.14);
    } else if (venda >= 0.0) {
        printf("Comissão: R$ %.2f", 400 + venda*0.14);
    } else {
        printf("Valor de venda inválido (negativo).");
        return 1;
    }
    
    return 0;
}