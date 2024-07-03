// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 39
// Finished by 29 Jun 2024


#include <stdio.h>

int main() {
  
  float base, alt;
  
  printf("Digite a base do triangulo: ");
  scanf("%f", &base);
  printf("Digite a altura do triangulo: ");
  scanf("%f", &alt);
  
  printf("\n");
  
  if (base <= 0 || alt <= 0) {
    printf("Dados invalidos. Comece novamente.");
    return 1;
  }
  
  printf("Area do triangulo: %.2f", base*alt/2);
  
  return 0;
}