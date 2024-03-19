#include <stdio.h>

int main()
{
// 36

float alt;
float raio;
float volume;

printf("Digite os valores de altura e raio de um cilindro circular:\n");

printf("Altura ->");
scanf("%f", &alt);
printf("Raio ->");
scanf("%f", &raio );

volume = 3.141592 * raio * raio * alt;

printf("\nCom esses valores de altura e raio, o volume deste cilindro é:\n%.1f", volume);

return 0;
}