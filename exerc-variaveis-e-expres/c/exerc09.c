#include <stdio.h>

int main()
{
    float celsius;
    float kelvin;

    printf("Insira um temperatura em graus Celsius, para ser convertida em Kelvin:\n");
    scanf("%f", &celsius);
    
    kelvin = celsius + 273.15;
    
    printf("\n%.1f°C é igual a %.2fK.", celsius, kelvin);
    
    return 0;

}