#include <stdio.h>
#include <math.h>

int main()
{
  // 51
  
  float coordX;
  float coordY;
  float distancia;
  
  printf("A partir das coordenadas X e Y de um ponto no R², vamos descobrir sua distância da origem (0,0).\n");
  
  printf("Digite a coordenada X: ");
  scanf("%f", &coordX);
  printf("Digite a coordenada Y: ");
  scanf("%f",&coordY);
  
  distancia = sqrt((coordX * coordX) + (coordY * coordY));
  
  printf("\nDistância da origem: %.1f", distancia);

  return 0;
}