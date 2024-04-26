#include <stdio.h>

int main()
{

    float m2;
    float ac;

    printf("Insira um valor de área em acres (ac), para ser convertido em metros quadrados (m²):\n");
    scanf("%f", &ac);
    
    m2 = ac * 4048.58;
    
    printf("\n%.2fac é igual a %.2fm².", ac, m2);

    return 0;

}