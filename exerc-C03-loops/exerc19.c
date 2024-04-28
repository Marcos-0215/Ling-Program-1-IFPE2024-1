#include <stdio.h>

int potencia(int, int);

int main() {
    printf("C03-19\n\n");

    int num, dig;
    
    printf("Digite um número inteiro entre 100 e 999:\n");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("Número inválido.");
        return 1;
    }
    
    printf("\nDígitos (um por linha):\n");

    for (int i=2; i>=0; i--) {
        dig = num / potencia(10, i);
        num = num - dig * potencia(10, i);
        printf("%d\n", dig);
    }
    
    return 0;
}

int potencia(int base, int expoente) {
    int poten = 1;
    
    for (int i=0; i<expoente; i++) {
        poten *= base;
    }
    
    return poten;
}