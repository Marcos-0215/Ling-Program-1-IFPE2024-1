#include <stdio.h>
#include <math.h>

int main()
{
    printf("C02-25: RAÍZES DE EQUAÇÕES DE 2º GRAU\n\n");
    
    float a, b, c, delta, raiz1, raiz2;
    
    printf("Digite o valor da variável \"a\": ");
    scanf("%f", &a);
    
    if (a==0) {
        printf("\nNão é équação de segundo grau.");
        return 1;
    }
    
    printf("Digite o valor da variável \"b\": ");
    scanf("%f", &b);
    printf("Digite o valor da variável \"c\": ");
    scanf("%f", &c);
    
    delta = b*b - 4.0*a*c;
    
    if (delta < 0) {
        printf("\nNão existe raiz.");
    } else if (delta == 0) {
        raiz1 = (-b) / (2 * a);
        printf("\nRaiz única: %.2f", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nPrimeira raiz: %.2f", raiz1);
        printf("\nSegunda raiz: %.2f", raiz2);
    }
  
    return 0;
}