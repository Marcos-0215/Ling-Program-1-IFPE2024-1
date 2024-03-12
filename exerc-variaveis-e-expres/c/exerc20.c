#include <stdio.h>

int main()
{

    float kg;
    float lb;

    printf("Insira um valor de massa em quilogramas (kg), para ser convertido em libras (lb):\n");
    scanf("%f", &kg);
    
    lb = kg / 0.45;
    
    printf("\n%.1fkg é igual a %.1flb.", kg, lb);


    return 0;

}