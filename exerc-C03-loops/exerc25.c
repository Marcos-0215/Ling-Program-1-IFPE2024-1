#include <stdio.h>

int main() {
    printf("C03-25\n\n");
    
    int result = 0;
    
    printf("A soma dos números naturais abaixo de 1000 que são múltiplos de 3 ou 5:\n");
    
   
    for (int i=1; i<1000; i++) {
        
        if (i%3 == 0 || i%5 == 0) {
            result += i;
        }
    }
    
    printf("%d", result);
    
    return 0;
}