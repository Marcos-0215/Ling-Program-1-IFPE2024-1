#include <stdio.h>

int main() {
    printf("C03-23\n\n");
    
    int num;
    
    
    
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("\nNúmero inválido.\n");
        return 1;
    }
    
    
    printf("\nSeus divisores são:\n\n");
    
    for (int i=1; i<num; i++) {
        
        if (num%i == 0) {
            printf("%d, ", i);
        }
        
    }
    
    printf("%d.", num);
    
    
    return 0;
}