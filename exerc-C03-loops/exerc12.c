#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\nTodos números naturais de %d a 0:\n", num);
        
        for (int i=num; i>=0; i--) {
            if (i==0) {
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