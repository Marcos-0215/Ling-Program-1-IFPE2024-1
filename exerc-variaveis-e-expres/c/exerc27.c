#include <stdio.h>

int main()
{

    float m2;
    float ha;

    printf("Insira um valor de área em hectare (ha), para ser convertido em metros quadrados (m²):\n");
    scanf("%f", &ha);
    
    m2 = ha * 1000;
    
    printf("\n%.2fha é igual a %.1fm².", ha, m2);

    return 0;

}