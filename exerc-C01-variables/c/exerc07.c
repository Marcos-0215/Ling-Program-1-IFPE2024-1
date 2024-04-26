#include <stdio.h>

int main()
{
    float fahren;
    float celsius;
    
    printf("Insira um temperatura em Fahrenheit, para ser convertida em Celsius:\n");
    scanf("%f", &fahren);
    
    celsius = (fahren -32) * (5.0 / 9.0);
    
    printf("\n%.1f°F é igual a %.1f°C.", fahren, celsius);
    
    return 0;
}