// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 42
// Finished by 02 Jul 2024

#include <stdio.h>
#include <math.h>

int main() {
  
  while (1) {
    
    float n;
    
    printf("Valor: ");
    scanf("%f", &n);
    
    if (n<=0) {
      break;
    }
    
    printf("Quadrado = %f\n", n*n);
    printf("Cubo = %f\n", n*n*n);
    printf("Raiz Quadrada = %f\n", sqrt(n));
    
    printf("-------------\n");
    
  }
  
  return 0;
}