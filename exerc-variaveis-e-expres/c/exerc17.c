#include <stdio.h>

int main()
{

    float pol;
    float cm;

    printf("Insira um valor de comprimento em centímetros (cm), para ser convertido em polegadas (\"):\n");
    scanf("%f", &cm);
    
    pol = cm / 2.54;
    
    printf("\n%.1fcm é igual a %.1f\".", cm, pol);


    return 0;

}