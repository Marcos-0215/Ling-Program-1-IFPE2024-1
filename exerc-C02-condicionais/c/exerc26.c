#include <stdio.h>

int main() {
    float dist, litros, consumo;

    printf("Digite a distância, em Km: ");
    scanf("%f", &dist);

    printf("Digite a quantidade de gasolina consumida, em litros: ");
    scanf("%f", &litros);

    consumo = dist / litros;

    if (consumo < 8) {
        printf("\nVenda o carro!");
    } else if (consumo >= 8 && consumo <= 14) {
        printf("\nEconômico!");
    } else {
        printf("\nSuper econômico!");
    }

    return 0;
}