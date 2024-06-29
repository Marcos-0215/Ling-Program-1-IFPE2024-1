// Exercicios Linguagem de Programacao, Prof Marco
// C03 -> Comandos de Repeticao (Loops)
// Questao 32
// Finished by 18 May 2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
       
  int n;
  
  printf("Digite a quantidade de vezes de lançamento dos dados: ");
  scanf("%d", &n);
  
  srand(time(NULL));
  
  for (int i=0; i<n; i++) {
      
    int d1 = rand()%6 + 1;
    int d2 = rand()%6 + 1;
    
    printf("\nDado 1: %d\tDado 2: %d\n", d1, d2);
    
    
    if (d1>d2) {
      printf("Dado 1 > Dado 2\n");
    } else if (d1<d2) {
      printf("Dado 1 < Dado 2\n");
    } else {
      printf("Dado 1 = Dado 2\n");
    }
      
  }
   
  return 0;
}