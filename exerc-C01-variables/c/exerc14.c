#include <stdio.h>

int main()
{
    float grau;
    float rad;
    
    printf("Insira um ângulo em graus (°), para ser convertido em radianos (rad):\n");
    scanf("%f", &grau);
    
    rad = grau * 3.14 / 180;
    
    printf("\n%.1f° é igual a %.2frad.", grau, rad);
    
    return 0;

}