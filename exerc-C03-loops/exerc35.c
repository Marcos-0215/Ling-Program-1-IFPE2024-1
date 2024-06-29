// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 35
// Finished by 20 Jun 2024


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  int start, end;
  int soma=0;
  
  printf("Digite o valor inicial e valor final: ");
  scanf("%d %d", &start, &end);
  printf("\n");
  
  if (start>end) {
    printf("Intervalo de valores inválido");
    return 1;
  }
  
  for (int i=start; i<=end; i++) {
    if (i%2!=0) {
      soma+=i;
    }
  }
  
  printf("Soma dos ímpares neste intervalo: %d", soma);

  return 0;
}