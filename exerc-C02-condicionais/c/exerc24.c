#include <stdio.h>

int main () {
    float valor;
    char estado[2];
    
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    
    printf("Digite o estado de destino: ");
    scanf("%s", estado);
    
    if ((estado[0] == 'M' || estado[0] == 'm') && (estado[1] == 'G' || estado[1] == 'g')) {
        printf("\nValor com imposto: R$ %.2f", valor*1.07);
        return 0;
    }
    
    if ((estado[0] == 'S' || estado[0] == 's') && (estado[1] == 'P' || estado[1] == 'p')) {
        printf("\nValor com imposto: R$ %.2f", valor*1.12);
        return 0;
    }
    
    if ((estado[0] == 'R' || estado[0] == 'r') && (estado[1] == 'J' || estado[1] == 'j')) {
        printf("\nValor com imposto: R$ %.2f", valor*1.15);
        return 0;
    }
    
    if ((estado[0] == 'M' || estado[0] == 'm') && (estado[1] == 'S' || estado[1] == 's')) {
        printf("\nValor com imposto: R$ %.2f", valor*1.08);
        return 0;
    }
    
    printf("\nEstado inválido.");
    
    return 0;
}