#include <stdio.h>

int main()
{

    float m2;
    float ac;

    printf("Insira um valor de área em metros quadrados (m²), para ser convertido em acres (ac):\n");
    scanf("%f", &m2);
    
    ac = m2 * 0.000247;
    
    printf("\n%.1fm² é igual a %.4fac.", m2, ac);


    return 0;

}