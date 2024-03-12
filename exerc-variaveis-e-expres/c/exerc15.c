#include <stdio.h>

int main()
{
    float rad;
    float grau;
    
    printf("Insira um ângulo em radiano (rad), para ser convertido em graus (°):\n");
    scanf("%f", &rad);
    
    grau = rad * 180 / 3.14;
    
    printf("\n%.1frad é igual a %.1f°", rad, grau);
    
    return 0;

}