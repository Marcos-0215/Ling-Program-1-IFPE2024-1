#include <stdio.h>

int main()
{

    float valor1;
    float valor2;
    float valor3;
    float resultado;

    printf("Insira 3 valores, para obter como resultado a soma dos quadrados destes valores:\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);
    
    
    resultado = valor1*valor1 + valor2*valor2 + valor3*valor3;
    
    printf("\nResultado (soma dos quadrados dos valores)\n= %.1f", resultado);

    return 0;

}