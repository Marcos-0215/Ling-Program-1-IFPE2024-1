#include <stdio.h>


int main() {
    printf("C03-20\n\n");
    
    int num;
    int totalCount=0, evenCount=0;
    
    do {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        totalCount++;
        
        if (num%2==0) {
            evenCount++;
        }
    } while (num!=1000);
    
    printf("\nTotal de números: %d", totalCount);
    printf("\nNúmeros pares: %d", evenCount);
    
    return 0;
}