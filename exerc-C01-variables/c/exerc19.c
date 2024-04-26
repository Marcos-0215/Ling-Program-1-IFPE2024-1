#include <stdio.h>

int main()
{

    float m3;
    float litros;

    printf("Insira um valor de volume em litros (L), para ser convertido em metros cúbicos (m³):\n");
    scanf("%f", &litros);
    
    m3 = litros / 1000;
    
    printf("\n%.1fL é igual a %.3fm³.", litros, m3);


    return 0;

}