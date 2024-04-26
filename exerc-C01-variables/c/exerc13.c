#include <stdio.h>

int main()
{
    float distkm;
    float distmi;
    
    printf("Insira uma distância em quilômetro (km), para ser convertida em milhas (mi):\n");
    scanf("%f", &distkm);
    
    distmi = distkm / 1.61;
    
    printf("\n%.1fkm é igual a %.1fmi.", distkm, distmi);
    
    return 0;

}