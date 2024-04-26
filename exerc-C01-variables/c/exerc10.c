#include <stdio.h>

int main()
{
    float velkph;
    float velmps;
    
    printf("Insira uma velocidade em km/h (quilometro por hora), para ser convertida em m/s (metro por segundo):\n");
    scanf("%f", &velkph);
    
    velmps = velkph / 3.6;
    
    printf("\n%.1fkm/h é igual a %.1fm/s.", velkph, velmps);
    
    return 0;

}