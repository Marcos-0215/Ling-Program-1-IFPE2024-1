#include <stdio.h>

int main() {
    printf("C03-26\n\n");
    
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    while (1) {
        num++;
        
        if (num%11==0 || num%13==0 || num%17==0) {
            break;
        }
    }
    
    printf("Primeiro múltiplo de 11, 13 ou 17 após o número digitado é: %d\n", num);
    
    return 0;
}