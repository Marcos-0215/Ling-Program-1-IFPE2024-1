#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, num3;
    char opcao;
    float media;

    printf("Digite o 1º número inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o 2º número inteiro positivo: ");
    scanf("%d", &num2);

    printf("Digite o 3º número inteiro positivo: ");
    scanf("%d", &num3);

    printf("Escolha a média a ser calculada:\n");
    printf("a) Geométrica\nb) Ponderada\nc) Harmônica\nd) Aritmética\n");
    printf("Opção: ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            media = cbrt(num1 * num2 * num3); 
            printf("Média Geométrica: %.2f\n", media);
            break;
            
        case 'b':
            media = (num1 + 2 * num2 + 3 * num3) / 6.0;
            printf("Média Ponderada: %.2f\n", media);
            break;
            
        case 'c':
            media = 1 / (1 / (float) num1 + 1 / (float) num2 + 1 / (float) num3); 
            printf("Média Harmônica: %.2f\n", media);
            break;
            
        case 'd':
            media = (num1 + num2 + num3) / 3.0;
            printf("Média Aritmética: %.2f\n", media);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}