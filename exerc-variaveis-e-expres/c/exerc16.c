#include <stdio.h>

int main()
{

    float pol;
    float cm;

    printf("Insira um valor de comprimento em polegadas (\"), para ser convertido em centímetros (cm):\n");
    scanf("%f", &pol);
    
    cm = pol * 2.54;
    
    printf("\n%.1f\" é igual a %.1fcm.", pol, cm);


    return 0;

}