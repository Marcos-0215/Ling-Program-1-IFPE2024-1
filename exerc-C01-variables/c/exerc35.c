#include <stdio.h>
#include <math.h>

int main()
{
// 35

float a;
float b;
float hip;

printf("Digite os valores a e b dos catetos de um triângulo:\n");

printf("Cateto a ->");
scanf("%f", &a);
printf("Cateto b ->");
scanf("%f", &b);

hip = sqrt((a * a) + (b * b));

printf("\nCom esses valores de catetos, o valor da hipotenusa deste triângulo é:\n%.1f", hip);

return 0;
}