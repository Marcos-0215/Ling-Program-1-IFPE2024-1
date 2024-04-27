#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &num);

    if (num > 0 && num%2==0) {
        printf("\nTodos números naturais pares até %d:\n", num);
        
        for (int i=0; i<=num; i+=2) {
            if (i==num) {
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