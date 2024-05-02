#include <stdio.h>

int main() {
    printf("C03-28\n\n");
    
    int n;
    float e=1.0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        
        int fat=1;
        
        for (int j=1; j<=i; j++) {
            fat*=j;
        }
        e+= (1.0/fat);
    }
    
    printf("\nValor de E: %.4f\n", e);
    
    return 0;
}