// Exercicios Linguagem de Programacao, Prof Marco
// C08 - 02
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>
#include <math.h>

int fatorar(int num) {
    
    if (num==1) {
        return 1;
    } else {
        return num*fatorar(num-1);
    }
    
}

int main() {
    
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    printf("\nO fatorial do número %d é:\n%d", n, fatorar(n));
    
    return 0;
}