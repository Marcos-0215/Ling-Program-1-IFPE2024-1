#include <stdio.h>

int main()
{
    float kelvin;
    float celsius;
    
    printf("Insira um temperatura em Kelvin, para ser convertida em Celsius:\n");
    scanf("%f", &kelvin);
    
    celsius = kelvin - 273.15;
    
    printf("\n%.1fK é igual a %.2f°C.", kelvin, celsius);
    
    return 0;

}