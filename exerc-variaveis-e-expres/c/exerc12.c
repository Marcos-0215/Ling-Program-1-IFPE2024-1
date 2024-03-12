#include <stdio.h>

int main()
{
    float distmi;
    float distkm;
    
    printf("Insira uma distância em milhas (mi), para ser convertida em quilômetro (km):\n");
    scanf("%f", &distmi);
    
    distkm = distmi * 1.61;
    
    printf("\n%.1fmi é igual a %.1fkm.", distmi, distkm);
    
    return 0;

}