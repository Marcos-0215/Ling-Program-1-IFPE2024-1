#include <stdio.h>

int main () {
    
    int opt;
    float x, y;
    
    printf("Escolha a opção:\n");
    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números (maior pelo menor).\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    printf("Opção: ");
    scanf("%d", &opt);
    
    if (!(opt == 1 || opt == 2 || opt == 3 || opt == 4)) {
        printf("\nDigite uma opção válida (1 a 4).");
        return 1;
    }
    
    printf("Digite um número: ");
    scanf("%f", &x);
    printf("Digite outro número: ");
    scanf("%f", &y);
    
    switch (opt) {
        case 1:
            printf("\nSoma: %.2f", x + y);
            break;
            
        case 2:
            if (x > y) {
            printf("\nDiferença: %.2f", x - y);
            } else {
            printf("\nDiferença: %.2f", y - x);
            }
            break;
            
        case 3:
            printf("\nProduto: %.2f", x * y);
            break;
            
        case 4:
            if (y > 0) {
                printf("\nDivisão: %.2f", x / y);
            } else {
                printf("\nO denominador não pode ser zero.");
            }
            break;
        
        default:
        printf("\nDigite uma opção válida (1 a 4).");
    }
    
    return 0;
}