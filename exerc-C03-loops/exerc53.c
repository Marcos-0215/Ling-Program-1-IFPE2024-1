// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Problema -> 53
// Finished by ?? ?? 2024


#include <stdio.h>

int main() {
  int n;
  int num = 1;
  int cont = 1;
  
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  
  printf("\nTriângulo de Floyd com %d linhas:\n", n);

  for (int i=0; i<n; i++) {
    
    for (int j=0; j<cont; j++) {
      printf("%d ", num);
      num++;
    }
    cont++;
    printf("\n");
  }

  return 0;
}