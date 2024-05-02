#include <stdio.h>

int main() {
    printf("C03-29\n\n");
    
    float s=0.0;

    for (int i=1; i<=5; i++) {
        
        int fat=1;
        
        for (int j=1; j<=i*2; j++) {
            fat*=j;
        }
        s+= (float) i/fat;
    }
    
    printf("\nValor de S: %f\n", s);
    
    return 0;
}