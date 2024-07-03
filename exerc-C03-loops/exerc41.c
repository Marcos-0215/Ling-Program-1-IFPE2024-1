// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 41
// Finished by 02 Jul 2024

#include <stdio.h>

int main() {
  
  while (1) {
    float r1, r2;
    
    printf("R1: ");
    scanf("%f", &r1);
    if (r1==0) {
      break;
    }
    printf("R2: ");
    scanf("%f", &r2);
    if (r2==0) {
      break;
    }
    
    printf("PARALELO = %f\n", (r1*r2)/(r1+r2));
    printf("-----------\n");
  }
  
  return 0;
}