// Exercicios Linguagem de Programacao, Prof Marco
// C08 - 03
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>
#include <math.h>

int somarPrimeirosCubos(int n) {
    
    if (n==1) {
        return 1;
    } else {
        return n*n*n + somarPrimeirosCubos(n-1);
    }
    
}

int main() {
    
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    printf("\nA soma dos primeiros %d cubos eh:\n%d", n, somarPrimeirosCubos(n));
    
    return 0;
}