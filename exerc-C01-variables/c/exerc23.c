#include <stdio.h>

int main()
{

    float yd;
    float m;

    printf("Insira um valor de comprimento em metros (m), para ser convertido em jardas (yd):\n");
    scanf("%f", &m);
    
    yd = m / 0.91;
    
    printf("\n%.1fm é igual a %.1fyd.", m, yd);


    return 0;

}