#include <stdio.h>

int main()
{

    float m3;
    float litros;

    printf("Insira um valor de volume em metros cúbicos (m³), para ser convertido em litros (L):\n");
    scanf("%f", &m3);
    
    litros = m3 * 1000;
    
    printf("\n%.1fm³ é igual a %.1fL.", m3, litros);


    return 0;

}