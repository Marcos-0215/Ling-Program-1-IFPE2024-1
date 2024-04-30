#include <stdio.h>

int main() {
    printf("C03-22\n\n");
    
    float nota, soma = 0;
    int count = 0;
    
    do {
        printf("Digite uma nota (10 a 20): ");
        scanf("%f", &nota);
        
        if (!(nota >= 10 && nota <= 20)) {
            break;
        }
        
        soma += nota;
        count++;
        
        printf("Média até agora: %.2f\n", soma/count);
        
        
    } while (nota >= 10 && nota <= 20);
    
    
    printf("\nMÉDIA FINAL = %.2f", soma/count);
    
    
    return 0;
}