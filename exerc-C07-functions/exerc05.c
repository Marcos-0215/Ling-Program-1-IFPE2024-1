// Exercicios Linguagem de Programacao, Prof Marco
// C07 - 05
// FEITO 12/06/2024

#include <stdio.h>
#include <string.h>

#define PI 3.14

float volume(float raio) {
    
  float vol = (4 / 3.0) * PI * raio * raio * raio;
  
  return vol;
    
}

int main() {
    
  float raio;
  
  printf("Digite o raio de uma esfera: ");
  scanf("%f", &raio);
  
  printf("\nO volume desta esfera, de raio %.2f, é de:\n%.2f", raio, volume(raio));
  
  return 0;
}