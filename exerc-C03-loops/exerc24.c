#include <stdio.h>

int main() {
    printf("C03-24\n\n");
    
    int num;
    
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("\nNúmero inválido.\n");
        return 1;
    }
    
    printf("\nA soma de seus divisores é:\n\n");
    
    int soma = 0;
    
    for (int i=1; i<num; i++) {
        
        if (num%i == 0) {
            soma += i;
        }
        
    }
    
    printf("%d", soma);
    
    return 0;
}