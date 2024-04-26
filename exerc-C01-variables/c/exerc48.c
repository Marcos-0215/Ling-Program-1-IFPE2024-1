#include <stdio.h>

int main()
{
  // 48

  int total;
  int hora;
  int min;
  int seg;

  printf("Digite um valor inteiro em segundos:\n");
  scanf("%d", &total);

  /*
  hora = total / 3600;
  min = (total - hora*3600) / 60;
  seg = total - hora*3600 - min*60;
  */

  seg = total%60;
  min = (total/60)%60;
  hora = total/60/60;


  printf("\nO que equivale a:\n%dh %dmin %ds", hora, min, seg);

  return 0;
}