#include <stdio.h>

int main()
{
    float celsius;
    float fahren;
    
    printf("Insira um temperatura em Celsius, para ser convertida em Fahrenheit:\n");
    scanf("%f", &celsius);
    
    fahren = celsius * (9.0 / 5.0) + 32.0;
    
    printf("\n%.1f°C é igual a %.1f°F.", celsius, fahren);
    
    return 0;
}