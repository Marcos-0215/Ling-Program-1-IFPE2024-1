// Exercicios Linguagem de Programacao, Prof Marco
// C08 - 01
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>
#include <math.h>

int somatorio(int n) {
    
    if (n==1) {
        return 1;
    } else {
        return n + somatorio(n-1);
    }
}

int main() {
    
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    printf("\nO somatório dos números de 1 a %d é:\n%d", num, somatorio(num));
    
    return 0;
}