// Exercicios Linguagem de Programacao, Prof Marco
// C08 - 04
// FEITO 12/06/2024

#include <stdio.h>

int exponenciar(int base, int expoente) {
    
    if (expoente==0) {
        return 1;
    } else {
        return base * exponenciar(base, expoente-1);
    }
    
}

int main() {
    
    int k, n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &k);
    printf("Digite outro inteiro positivo: ");
    scanf("%d", &n);
    
    printf("\nO resultado de %d elevado a %d eh:\n%d", k, n, exponenciar(k, n));
    
    return 0;
}