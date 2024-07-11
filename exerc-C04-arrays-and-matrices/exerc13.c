// EXERCICIOS LINGUAGEM PROGRAMACAO 1 2024.1
// C04.1 - VETORES (Arrays)
// Problem -> 13
// Finished by 21 Jun 2024

#include <stdio.h>

int main() {
    
    float valores[5];
    
    printf("Digite 5 valores:\n");
    for (int i=0; i<5; i++) {
        scanf("%f", &valores[i]);
    }
    
    float maior=-999999.9;
    int maiorInd;
    
    float menor=999999.9;
    int menorInd;
    
    for (int i=0; i<5; i++) {
        
        if (valores[i]>maior) {
            maior = valores[i];
            maiorInd = i;
        }
        
        if (valores[i]<menor) {
            menor = valores[i];
            menorInd = i;
        }
        
    }
    
    printf("\n");
    printf("Posição do maior valor: %d\n", maiorInd+1);
    printf("Posição do menor valor: %d\n", menorInd+1);
    
    return 0;
}