#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &num);

    if (num > 0 && num%2==0) {
        printf("\nTodos números naturais pares de %d até 0:\n", num);
        
        for (int i=num; i>=0; i-=2) {
            if (i==0) {
               printf("%d.", i); 
            } else {
                printf("%d, ", i);    
            }
            
        }
        
    } else {
        printf("\nO numero digitado não é um positivo par.\n");
    }
    return 0;
}