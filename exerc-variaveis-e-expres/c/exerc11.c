#include <stdio.h>

int main()
{
    float velmps;
    float velkph;

    printf("Insira uma velocidade em m/s (metro por segundo), para ser convertida em km/h (quilometro por hora):\n");
    scanf("%f", &velmps);
    
    velkph = velmps * 3.6;
    
    printf("\n%.1fm/s é igual a %.1fkm/h.", velmps, velkph);
    
    return 0;

}