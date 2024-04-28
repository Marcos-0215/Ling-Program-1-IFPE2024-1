#include <stdio.h>

int main() {
    int num, soma;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    for (int i=0; i<num; i++) {
        soma += i;
    }

    printf("\nSoma dos %d primeiros números naturais (incluindo o zero):\n", num);
    printf("%d\n", soma);
    
    printf("\nSoma dos %d primeiros números naturais (SEM incluir o zero):\n", num);
    printf("%d\n", soma+num);

    return 0;
}