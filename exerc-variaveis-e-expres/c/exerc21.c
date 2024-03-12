#include <stdio.h>

int main()
{

    float kg;
    float lb;

    printf("Insira um valor de massa em libras (lb), para ser convertido em quilogramas (kg):\n");
    scanf("%f", &lb);
    
    kg = lb * 0.45;
    
    printf("\n%.1flb é igual a %.1fkg.", lb, kg);


    return 0;

}