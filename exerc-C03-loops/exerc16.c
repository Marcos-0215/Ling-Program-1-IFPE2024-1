#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro positivo ímpar: ");
    scanf("%d", &num);

    if (num > 0 && num%2!=0) {
        printf("\nTodos números naturais ímpares de %d até 1:\n", num);
        
        for (int i=num; i>=1; i-=2) {
            if (i==1) {
               printf("%d.", i); 
            } else {
                printf("%d, ", i);    
            }
            
        }
        
    } else {
        printf("\nO numero digitado não é um positivo ímpar.\n");
    }
    return 0;
}