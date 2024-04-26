#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\nTodos números naturais até %d:\n", num);
        for (int i=0; i<=num; i++) {
            if (i==num) {
               printf("%d.", i); 
            } else {
                printf("%d, ", i);    
            }
            
        }
        
    } else {
        printf("\nO numero digitado não é positivo.\n");
    }
    return 0;
}