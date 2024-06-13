// Exercicios Linguagem de Programacao, Prof Marco
// C07 - 08
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>
#include <math.h>

float calcularHipotenusa(float cat1, float cat2) {
    
    return sqrt(cat1*cat1 + cat2*cat2);
    
}

int main() {
    
    float cat1, cat2;
    
    printf("Digite o valor de um cateto: ");
    scanf("%f", &cat1);
    printf("Digite o valor do outro cateto: ");
    scanf("%f", &cat2);
    
    printf("O valor da hipotenusa é:\n%.2f", calcularHipotenusa(cat1, cat2));
    
    return 0;
}