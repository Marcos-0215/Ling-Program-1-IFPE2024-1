#include <stdio.h>

int main()
{

    float yd;
    float m;

    printf("Insira um valor de comprimento em jardas (yd), para ser convertido em metros (m):\n");
    scanf("%f", &yd);
    
    m = yd * 0.91;
    
    printf("\n%.1fyd é igual a %.1fm.", yd, m);


    return 0;

}