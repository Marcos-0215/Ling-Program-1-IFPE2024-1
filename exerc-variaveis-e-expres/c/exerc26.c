#include <stdio.h>

int main()
{

    float m2;
    float ha;

    printf("Insira um valor de área em metros quadrados (m²), para ser convertido em hectare (ha):\n");
    scanf("%f", &m2);
    
    ha = m2 * 0.0001;
    
    printf("\n%.1fm² é igual a %.4fha.", m2, ha);


    return 0;

}