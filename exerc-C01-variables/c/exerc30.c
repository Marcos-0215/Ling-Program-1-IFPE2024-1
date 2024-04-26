#include <stdio.h>

int main()
{
    float real;
    float dolar;
    float cotacao;
    
    
    printf("Vamos transformar um valor em real para dólar.\n\n");
    printf("Digite o valor em real -> R$ ");
    scanf("%f", &real);
    printf("Digite o cotação atual do dolar -> 1US$ = R$ ");
    scanf("%f", &cotacao);
    
    dolar = real / cotacao;
    
    printf("\nR$ %.2f equivalem a US$ %.2f.", real, dolar);
    
    return 0;

}