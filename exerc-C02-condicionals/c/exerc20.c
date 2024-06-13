#include <stdio.h>

int main () {

    float a, b, c;
    
    printf("Digite o lado A do triângulo: ");
    scanf("%f", &a);
    printf("Digite o lado B do triângulo: ");
    scanf("%f", &b);
    printf("Digite o lado C do triângulo: ");
    scanf("%f", &c);
    
    if (a > b + c || b > a + c || c > a + b) {
        printf("\nValores inválidos para um triângulo.");
        return 1;
    }
    
    if (a == b && a == c) {
        printf("\nTriângulo equilátero.");
    }
    
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
        printf("\nTriângulo isósceles.");
    }
    
    if (a != b && a != c && b != c) {
        printf("\nTriângulo escaleno.");
    }
    
    return 0;
}