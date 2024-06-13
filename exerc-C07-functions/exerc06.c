// Exercicios Linguagem de Programacao, Prof Marco
// C07 - 06
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>

int transformarEmSegundos(int h, int m, int s) {
    
  int t = 0;
  t += h*60*60;
  t += m*60;
  t += s;
  
  return t;
    
}

int main() {
    
  int horas, min, seg;
  
  printf("Digite a quantidade de horas: ");
  scanf("%d", &horas);
  printf("Digite a quantidade de minutos: ");
  scanf("%d", &min);
  printf("Digite a quantidade de segundos: ");
  scanf("%d", &seg);
  
  printf("\nO total em segundos é:\n%d", transformarEmSegundos(horas, min, seg));
  
  return 0;
}